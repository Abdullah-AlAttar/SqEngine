#include "Logger.h"

namespace sq
{
std::shared_ptr<spdlog::logger> Logger::_core_logger;
std::shared_ptr<spdlog::logger> Logger::_client_logger;

void Logger::init()
{
    spdlog::set_pattern("%^[%T] %n: %v%$");
    _core_logger = spdlog::stdout_color_mt("sq");
    _core_logger->set_level(spdlog::level::trace);

    _client_logger = spdlog::stdout_color_mt("app");
    _client_logger->set_level(spdlog::level::trace);
}

} //  namespace sq
