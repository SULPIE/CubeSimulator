//
// Created by SULPIE on 03.08.2024.
//

#include "CommandHandler.h"

CommandHandler* CommandHandler::instance = nullptr;
CommandHandler::CommandHandler(android_app* app): appcontext_(app) { instance = this; }

void CommandHandler::OnCallCommand(int32_t cmd)
{
    if(cmd == APP_CMD_TERM_WINDOW)
    {
        delete(this);
    }
}

CommandHandler* CommandHandler::getInstance() { return instance; }
