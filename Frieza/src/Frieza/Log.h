#pragma once

#include <memory>
#include "Core.h"
#include "spdlog/spdlog.h"
#include "spdlog/sinks/stdout_color_sinks.h"

namespace Frieza {
    class FRIEZA_API Log
    {
    public:

        static void Init();

        inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return  s_CoreLogger; }
        inline static std::shared_ptr<spdlog::logger>& GetAppLogger() { return s_ClientLogger; }

    private:

        static std::shared_ptr<spdlog::logger> s_CoreLogger;
        static std::shared_ptr<spdlog::logger> s_ClientLogger;


    };

}


#define FZ_CORE_TRACE(...)   ::Frieza::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define FZ_CORE_INFO(...)    ::Frieza::Log::GetCoreLogger()->info(__VA_ARGS__)
#define FZ_CORE_WARN(...)    ::Frieza::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define FZ_CORE_ERROR(...)   ::Frieza::Log::GetCoreLogger()->error(__VA_ARGS__)
#define FZ_CORE_FATAL(...)   ::Frieza::Log::GetCoreLogger()->fatal(__VA_ARGS__)

#define FZ_APP_TRACE(...)    ::Frieza::Log::GetAppLogger()->trace(__VA_ARGS__)
#define FZ_APP_INFO(...)     ::Frieza::Log::GetAppLogger()->info(__VA_ARGS__)
#define FZ_APP_WARN(...)     ::Frieza::Log::GetAppLogger()->warn(__VA_ARGS__)
#define FZ_APP_ERROR(...)    ::Frieza::Log::GetAppLogger()->error(__VA_ARGS__)
#define FZ_APP_FATAL(...)    ::Frieza::Log::GetAppLogger()->fatal(__VA_ARGS__)



