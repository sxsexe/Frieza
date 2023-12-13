
#include <Frieza.h>


class SandBoxApp : public Frieza::Application {

public:
    SandBoxApp() {}

    ~SandBoxApp() {}

};


Frieza::Application* Frieza::CreateApplication()
{
    return new SandBoxApp();
}