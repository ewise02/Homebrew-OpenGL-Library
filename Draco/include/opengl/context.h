#ifndef CONTEXT_H
#define CONTEXT_H

#include "window.h"

void init_win32_opengl();

int make_win32_opengl_context_current(win32_window* win);

void set_opengl_version(int ver_major, int ver_minor);

#endif