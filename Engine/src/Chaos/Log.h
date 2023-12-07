//
// Created by luizh on 06/12/2023.
//

#ifndef LOG_H
#define LOG_H

#include <spdlog/spdlog.h>
#include <spdlog/sinks/stdout_color_sinks.h>
#include <memory>

namespace Chaos {
    class Log {
    public:
        static void Init();

        static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
        static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }

    private:
        static std::shared_ptr<spdlog::logger> s_CoreLogger;
        static std::shared_ptr<spdlog::logger> s_ClientLogger;
    };
} // Chaos

// Core log macros
#define CHAOS_CORE_TRACE(...) ::Chaos::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define CHAOS_CORE_INFO(...) ::Chaos::Log::GetCoreLogger()->info(__VA_ARGS__)
#define CHAOS_CORE_WARN(...) ::Chaos::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define CHAOS_CORE_ERROR(...) ::Chaos::Log::GetCoreLogger()->error(__VA_ARGS__)
#define CHAOS_CORE_FATAL(...) ::Chaos::Log::GetCoreLogger()->fatal(__VA_ARGS__)

// Client log macros
#define CHAOS_TRACE(...) ::Chaos::Log::GetClientLogger()->trace(__VA_ARGS__)
#define CHAOS_INFO(...) ::Chaos::Log::GetClientLogger()->info(__VA_ARGS__)
#define CHAOS_WARN(...) ::Chaos::Log::GetClientLogger()->warn(__VA_ARGS__)
#define CHAOS_ERROR(...) ::Chaos::Log::GetClientLogger()->error(__VA_ARGS__)
#define CHAOS_FATAL(...) ::Chaos::Log::GetClientLogger()->fatal(__VA_ARGS__)

#endif //LOG_H
