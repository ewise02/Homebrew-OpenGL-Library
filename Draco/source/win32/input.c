#include "input.h"

#define true 1
#define false 0;

LRESULT WINAPI WindowProc(HWND hwnd, UINT Msg, WPARAM wParam, LPARAM lParam) {

    switch(Msg) {
        case WM_DESTROY: 
            HGLRC hglrc;
            if(hglrc = wglGetCurrentContext()) {
            wglMakeCurrent(NULL, NULL);
            ReleaseDC(hwnd, wglGetCurrentDC());
            wglDeleteContext(hglrc);
    }
            PostQuitMessage(0);
            return 0;
    }

    return DefWindowProcW(hwnd, Msg, wParam, lParam);
}

int process_win32_input() {
    MSG msg;
    if(PeekMessage(&msg, NULL, 0, 0, PM_REMOVE)) {
        TranslateMessage(&msg);
        DispatchMessage(&msg);


        if(msg.message == WM_QUIT) {
            return false;

        }

    }
    return true;
}

int is_key_pressed(int keycode) {
    if(GetAsyncKeyState(keycode) & 0x8000) {
        return true;
    }
    return false;
}