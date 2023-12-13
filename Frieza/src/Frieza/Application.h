#pragma once

#include "Core.h"

namespace Frieza {


    class FRIEZA_API Application
    {
    public:

        Application();
        virtual ~Application();

        void Run();

    };

    // To be defined in CLIENT
    Application* CreateApplication();

}

