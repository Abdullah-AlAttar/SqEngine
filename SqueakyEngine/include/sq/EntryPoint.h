
#ifndef ENTRYPOINT_H
#define ENTRYPOINT_H

extern sq::Application* sq::CreateApplication();



int main(int argc, char const *argv[])
{
   
    // fmt::print(fmt::color::green_yellow, "Running Squeaky Engine\n");
    // fmt::print("hello world {}","world\n");
    sq::Logger::init();
    CORE_WARN("initilzied LOG");
    CORE_INFO("INFO HERE");
    WARN("hello there {}","YES\n");
    auto app = sq::CreateApplication();
    sq::Logger::get_client_logger()->warn("hey there");
    app->run();

    delete app;
    /* code */  
    return 0;
}

#endif
