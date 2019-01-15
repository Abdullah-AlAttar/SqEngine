#include <spdlog/fmt/fmt.h>
#include <iostream>
#include <memory>
#include <sq/Application.h>
#include <sq/Logger.h>
#include <sq/EntryPoint.h>
#include <sq/Layer.h>

using namespace std;

class ExampleLayer : public sq::Layer
{
public:
	ExampleLayer()
		: Layer("Example")
	{
	}

	void OnUpdate() override
	{
		INFO("ExampleLayer::Update");
	}

	void OnEvent(sq::Event& event) override
	{
		TRACE("{0}", event);
	}

};

class Sandbox : public sq::Application
{
public:
	Sandbox()
	{
		PushLayer(new ExampleLayer());
	}

	~Sandbox()
	{

	}

};


sq::Application* sq::CreateApplication()
{
    return new Sandbox;
}

