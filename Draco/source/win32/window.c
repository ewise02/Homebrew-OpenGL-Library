#define UNICODE
#include "window.h"
#include "input.h"
#include "stdio.h"
#include "utility.h"

win32_window* create_win32_window(const char* title, int posx, int posy, int width, int height, int style) {
    win32_window* win = (win32_window*)malloc(sizeof(win32_window));
    if(!win) {
        return NULL;
    }
    wchar_t* wide_title = charToWchar(title);
    if(!wide_title) {
        free(win);
        return NULL;
    }

    WNDCLASS wc = {0};
    wc.lpfnWndProc = WindowProc;
    wc.lpszClassName = wide_title;
    wc.hInstance = GetModuleHandle(NULL);

    RegisterClass(&wc);

    HWND hwnd = CreateWindow(wide_title, wide_title, style, posx, posy, width, height, NULL, NULL, wc.hInstance, NULL);

    free(wide_title);

    if(!hwnd) {
        free(win);
        return NULL;
    }

    win->handle = hwnd;
    
    return win;

}

void destroy_win32_window(win32_window* win) {
    free(win);
}