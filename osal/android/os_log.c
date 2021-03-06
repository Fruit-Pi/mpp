/*
 * Copyright 2015 Rockchip Electronics Co. LTD
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#if defined(__ANDROID__)
#include <android/log.h>

void os_log_trace(const char* tag, const char* msg, va_list list)
{
    __android_log_vprint(ANDROID_LOG_VERBOSE, tag, msg, list);
}

void os_log_debug(const char* tag, const char* msg, va_list list)
{
    __android_log_vprint(ANDROID_LOG_DEBUG, tag, msg, list);
}

void os_log_info(const char* tag, const char* msg, va_list list)
{
    __android_log_vprint(ANDROID_LOG_INFO, tag, msg, list);
}

void os_log_warn(const char* tag, const char* msg, va_list list)
{
    __android_log_vprint(ANDROID_LOG_WARN, tag, msg, list);
}

void os_log_error(const char* tag, const char* msg, va_list list)
{
    __android_log_vprint(ANDROID_LOG_ERROR, tag, msg, list);
}

void os_log_fatal(const char* tag, const char* msg, va_list list)
{
    __android_log_vprint(ANDROID_LOG_FATAL, tag, msg, list);
}

#endif
