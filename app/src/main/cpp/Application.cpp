//
// Created by SULPIE on 04.08.2024.
//

#include "Application.h"
#include "android_log.h"

Application::Application() {}
Application::~Application() {}

void Application::onStart()
{
    LOGD("Started");
}

void Application::onUpdate()
{
    LOGD("Frame");
}

