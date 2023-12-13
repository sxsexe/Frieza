#pragma once


#ifdef FZ_PLATFORM_WINDOWS


extern Frieza::Application* Frieza::CreateApplication();

int main(int argc, char** argv)
{
    auto app = Frieza::CreateApplication();
    app->Run();
    delete app;
}


#endif // FZ_PLATFORM_WINDOWS
