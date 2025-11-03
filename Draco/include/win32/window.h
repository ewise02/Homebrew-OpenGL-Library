#ifndef WINDOW_H
#define WINDOW_H

typedef struct win32_window {
    void* handle;
} win32_window;

win32_window* create_win32_window(const char* title, int posx, int posy, int width, int height, int style);

void destroy_win32_window(win32_window* win);

#endif