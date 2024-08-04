//
// Created by SULPIE on 04.08.2024.
//

#ifndef CUBESIMULATOR_ANDROID_LOG_H
#define CUBESIMULATOR_ANDROID_LOG_H

#include <android/log.h>

#define LOGD( ... ) __android_log_print(ANDROID_LOG_DEBUG, "LOG", __VA_ARGS__)

#endif //CUBESIMULATOR_ANDROID_LOG_H
