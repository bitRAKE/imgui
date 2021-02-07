#pragma once


#define IMGUI_IMPLEMENTATION

// our imconfig.h options, move later :

    #define IMGUI_API __declspec( dllexport ) // not recommended!

//    #define IMGUI_DISABLE_OBSOLETE_FUNCTIONS

// smaller DLL:
//  #define IMGUI_DISABLE_DEMO_WINDOWS      // Disable demo windows: ShowDemoWindow()/ShowStyleEditor() will be empty. Not recommended.
//  #define IMGUI_DISABLE_METRICS_WINDOW    // Disable metrics/debugger window: ShowMetricsWindow() will be empty.

//  #define ImDrawIdx unsigned int


#include "imgui_single_file.h"




#define WIN32_LEAN_AND_MEAN             // Exclude rarely-used stuff from Windows headers
// Windows Header Files
#include <windows.h>
