#ifndef INPUT_H
#define INPUT_H

#include <Windows.h>

LRESULT WINAPI WindowProc(HWND hwnd, UINT Msg, WPARAM wParam, LPARAM lParam);

int process_win32_input();

int is_key_pressed(int keycode);

#endif