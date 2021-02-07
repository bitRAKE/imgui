// example_dll.cpp : Defines the exported functions for the DLL.
//

#include "pch.h"
#include "framework.h"
#include "example_dll.h"


// This is an example of an exported variable
EXAMPLEDLL_API int nexampledll=0;

// This is an example of an exported function.
EXAMPLEDLL_API int fnexampledll(void)
{
    return 0;
}

// This is the constructor of a class that has been exported.
Cexampledll::Cexampledll()
{
    return;
}
