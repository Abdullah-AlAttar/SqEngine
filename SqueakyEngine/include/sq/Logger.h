
#ifndef LOGGER_H
#define LOGGER_H
#include "spdlog/spdlog.h"
#include "spdlog/sinks/stdout_color_sinks.h"
#include <memory>
namespace sq
{

class Logger
{
public:
    static void init();

    inline static std::shared_ptr<spdlog::logger>&
    get_core_logger()
    {
        return _core_logger;
    }

    inline static std::shared_ptr<spdlog::logger>&
    get_client_logger()
    {
        return _client_logger;
    }

private:
    static std::shared_ptr<spdlog::logger> _core_logger;
    static std::shared_ptr<spdlog::logger> _client_logger;
};

// core logs
#define CORE_ERROR(...) ::sq::Logger::get_core_logger()->error(__VA_ARGS__)
#define CORE_WARN(...)  ::sq::Logger::get_core_logger()->warn(__VA_ARGS__)
#define CORE_INFO(...)  ::sq::Logger::get_core_logger()->info(__VA_ARGS__)
#define CORE_TRACE(...) ::sq::Logger::get_core_logger()->trace(__VA_ARGS__)
#define CORE_FATAL(...) ::sq::Logger::get_core_logger()->fatal(__VA_ARGS__)

// client logs
#define ERROR(...) ::sq::Logger::get_client_logger()->error(__VA_ARGS__)
#define WARN(...)  ::sq::Logger::get_client_logger()->warn(__VA_ARGS__)
#define INFO(...)  ::sq::Logger::get_client_logger()->info(__VA_ARGS__)
#define TRACE(...) ::sq::Logger::get_client_logger()->trace(__VA_ARGS__)
#define FATAL(...) ::sq::Logger::get_client_logger()->fatal(__VA_ARGS__)

} // namespace sq



#endif