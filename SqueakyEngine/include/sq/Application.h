
#ifndef APPLICATION_H
#define APPLICATION_H
#include "sq/Window.h"
#include "sq/LayerStack.h"
#include "sq/events/Event.h";
#include "sq/events/ApplicationEvent.h"
namespace sq
{

class Application
{
public:
    Application();
    Application(Application&&)      = default;
    Application(const Application&) = default;
    Application& operator=(Application&&) = default;
    Application& operator=(const Application&) = default;
    virtual ~Application();

    void OnEvent(Event& e);
    void run();
    void PushLayer(Layer* layer);
    void PushOverlay(Layer* layer);

private:

	bool OnWindowClose(WindowCloseEvent& e);
    std::unique_ptr<Window> m_window;
    bool m_running = true;
    LayerStack m_LayerStack;
};

// client side function
Application* CreateApplication();

} // namespace sq

#endif