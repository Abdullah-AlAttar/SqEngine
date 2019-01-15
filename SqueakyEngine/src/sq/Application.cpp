#include "sq/Application.h"
#include "sq/Logger.h"
#include "sq/events/ApplicationEvent.h"

#include <GLFW/glfw3.h>
namespace sq
{
#define BIND_EVENT_FN(x) std::bind(&Application::x, this, std::placeholders::_1)
Application::Application()
{
    m_window = std::unique_ptr<Window>(Window::Create());
    m_window->SetEventCallback(BIND_EVENT_FN(OnEvent));
}
void Application::run()
{

    while (m_running)
    {
        glClearColor(1, 0, 1, 1);
        glClear(GL_COLOR_BUFFER_BIT);
        for (Layer* layer : m_LayerStack)
				layer->OnUpdate();
        m_window->OnUpdate();
    }
}

void Application::OnEvent(Event& e)
{
    EventDispatcher dispatcher(e);
    dispatcher.Dispatch<WindowCloseEvent>(BIND_EVENT_FN(OnWindowClose));

    for (auto it = m_LayerStack.end(); it != m_LayerStack.begin();)
    {
        (*--it)->OnEvent(e);
        if (e.m_handled)
            break;
    }
}
bool Application::OnWindowClose(WindowCloseEvent& e)
{
    m_running = false;
    return true;
}
void Application::PushLayer(Layer* layer) { m_LayerStack.PushLayer(layer); }

void Application::PushOverlay(Layer* layer) { m_LayerStack.PushOverlay(layer); }
Application::~Application() {}
} // namespace sq
