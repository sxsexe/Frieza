#pragma once


#ifdef  FZ_PLATFORM_WINDOWS
    #ifdef FZ_BUILD_DLL
        #define FRIEZA_API __declspec(dllexport) 
    #endif
    #ifdef FZ_USE_DLL
        #define FRIEZA_API __declspec(dllimport) 
    #endif
#else
    #error Frieza only support Windows!
#endif