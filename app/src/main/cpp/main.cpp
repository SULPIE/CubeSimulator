//
// Created by SULPIE on 03.08.2024.
//
#include <game-activity/GameActivity.cpp>
#include <game-text-input/gametextinput.cpp>
#include <iostream>
#include <memory>
#include "CommandHandler.h"
#include "Application.h"

extern "C"
{
#include <game-activity/native_app_glue/android_native_app_glue.c>
//#include <logging.h>

CommandHandler* commandHandler = nullptr;

void handleAppCommand(android_app* app, int32_t cmd)
{
    if(commandHandler != nullptr) {
        commandHandler->OnCallCommand(cmd);
    }
}

void android_main(android_app* app)
{
    app->onAppCmd = handleAppCommand;
    commandHandler = new CommandHandler(app);

    auto application = std::make_unique<Application>();
    application->onStart();

    int events;
    android_poll_source* pollSource;

    while(!app->destroyRequested)
    {
        if(ALooper_pollAll(0, nullptr, &events, (void **)&pollSource) >= 0)
        {
            if(pollSource) pollSource->process(app, pollSource);
        }
        application->onUpdate();
    }
}

}