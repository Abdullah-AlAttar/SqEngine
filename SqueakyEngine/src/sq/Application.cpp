#include "Application.h"
#include "sq/Logger.h"
#include "sq/events/ApplicationEvent.h"
namespace sq
{
void Application::run()
{
    WindowResizeEvent e(1280, 720);
    if (e.IsInCategory(EventCategoryApplication))
    {
        TRACE(e);
    }
    if (e.IsInCategory(EventCategoryInput))
    {
        TRACE(e);
    }

    while (true)
    {
    }
}
Application::Application() {}

Application::~Application() {}
} // namespace sq
