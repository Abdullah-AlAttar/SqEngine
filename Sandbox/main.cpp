#include <spdlog/fmt/fmt.h>
#include <iostream>
#include <memory>
#include <sq/Application.h>
#include <sq/Logger.h>
#include <sq/EntryPoint.h>


using namespace std;

class Sandbox : public sq::Application
{
public:
    Sandbox() {}
    ~Sandbox() {}
};

sq::Application* sq::CreateApplication()
{
    return new Sandbox;
}

