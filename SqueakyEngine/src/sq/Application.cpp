#include "Application.h"
#include "sq/Logger.h"
#include "sq/events/ApplicationEvent.h"

#include <GLFW/glfw3.h>
namespace sq
{
void Application::run()
{
    
    while (m_running)
    {
        glClearColor(1,0,1,1);
        glClear(GL_COLOR_BUFFER_BIT);
        m_window->OnUpdate();
    }
}
Application::Application()
{
    m_window = std::unique_ptr<Window>(Window::Create());
}

Application::~Application() {}
} // namespace sq
