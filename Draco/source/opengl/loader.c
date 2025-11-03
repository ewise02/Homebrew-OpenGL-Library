#include "loader.h"
#include <stdio.h>

void* load_opengl_func_win32(const char* name) {

    void* func = (void*)wglGetProcAddress(name);

    if(func == 0 || (func == (void*)0x1) || (func == (void*)0x2) || (func == (void*)0x3) || (func == (void*)-1)) {
        HMODULE load_library = LoadLibraryA("opengl32.dll");
        func = (void*)GetProcAddress(load_library, name);
    }

    return func;
}