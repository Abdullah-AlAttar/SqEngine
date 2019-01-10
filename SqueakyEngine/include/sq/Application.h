
#ifndef APPLICATION_H
#define APPLICATION_H
#include <sq/Window.h>

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
    void run();

private:
    std::unique_ptr<Window> m_window;
    bool m_running = true;
};

// client side function
Application* CreateApplication();

} // namespace sq

#endif