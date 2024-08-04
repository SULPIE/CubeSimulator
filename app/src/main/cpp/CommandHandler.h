//
// Created by SULPIE on 03.08.2024.
//

#ifndef CUBESIMULATOR_COMMANDHANDLER_H
#define CUBESIMULATOR_COMMANDHANDLER_H

#include <game-activity/native_app_glue/android_native_app_glue.h>

class CommandHandler
{
public:
    CommandHandler(const CommandHandler&) = delete;
    CommandHandler(CommandHandler&&) = delete;
    CommandHandler& operator = (const CommandHandler&) = delete;
    CommandHandler& operator = (CommandHandler&&) = delete;

static CommandHandler* getInstance();

    explicit CommandHandler(android_app* app);
    void OnCallCommand(int32_t cmd);
private:
    android_app* appcontext_;
    static CommandHandler* instance;
};


#endif //CUBESIMULATOR_COMMANDHANDLER_H
