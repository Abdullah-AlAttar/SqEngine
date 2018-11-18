
#ifndef APPLICATION_H
#define APPLICATION_H

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
};

// client side function
Application* CreateApplication();

} // namespace sq

#endif