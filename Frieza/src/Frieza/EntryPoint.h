#pragma once


#ifdef FZ_PLATFORM_WINDOWS


extern Frieza::Application* Frieza::CreateApplication();

int main(int argc, char** argv)
{

    Frieza::Log::Init();
    FZ_CORE_INFO("Welcome to Frieza Engine");

    FZ_APP_INFO("APP Started {0}", "Yeah");

    auto app = Frieza::CreateApplication();
    app->Run();
    delete app;
}


#endif // FZ_PLATFORM_WINDOWS
