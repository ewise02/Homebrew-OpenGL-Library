#define UNICODE
#include "context.h"
#include <Windows.h>
#include "wglConstants.h"

#define GL_TRUE 1
#define GL_FALSE 0

#define WGL_CONTEXT_VERSION_MAJOR_ARB 0x2091
#define WGL_CONTEXT_VERSION_MINOR_ARB 0x2092
#define WGL_CONTEXT_PROFILE_MASK_ARB 0x9126
#define WGL_CONTEXT_CORE_PROFILE_BIT_ARB 0x00000001

typedef HGLRC WINAPI PFNWGLCREATECONTEXTATTRIBSARBPROC(HDC hdc, HGLRC hShareContext, const int* attribList);

typedef BOOL WINAPI PFNWGLCHOOSEPIXELFORMATARBPROC(HDC hdc, const int* piAttribIList, const FLOAT* pfAttribFLIst, UINT nMAxFormats, int* piFormats, UINT* nNumFormats);

PFNWGLCREATECONTEXTATTRIBSARBPROC* wglCreateContextAttribsARB;
PFNWGLCHOOSEPIXELFORMATARBPROC* wglChoosePixelFormatARB;

typedef struct OpenGLAttribs {
    int ver_major;
    int ver_minor;
} OpenGLAttribs;

OpenGLAttribs glAttrib = {1, 1};

void init_win32_opengl() {
    WNDCLASS wc = { 0 };
    wc.hInstance = NULL;
    wc.lpfnWndProc = DefWindowProc;
    wc.lpszClassName = L"OpenGlDummyWindow";
    wc.style = CS_OWNDC;

    RegisterClass(&wc);

    HWND dummyWindow = CreateWindowEx(0, L"OpenGlDummyWindow", L"Dummy",
                                      WS_OVERLAPPEDWINDOW, CW_USEDEFAULT,
                                      CW_USEDEFAULT, CW_USEDEFAULT, CW_USEDEFAULT,
                                      NULL, NULL, NULL, NULL);
    if(!dummyWindow) {
        return;
    }
    HDC dc = GetDC(dummyWindow);

    PIXELFORMATDESCRIPTOR pfd = {
        sizeof(PIXELFORMATDESCRIPTOR),
        1,
        PFD_DRAW_TO_WINDOW | PFD_SUPPORT_OPENGL | PFD_DOUBLEBUFFER,
        PFD_TYPE_RGBA,
        32,
        0, 0, 0, 0, 0, 0,
        0,
        0,
        0,
        0, 0, 0, 0,
        24,
        8,
        0,
        PFD_MAIN_PLANE,
        0,
        0, 0, 0
    };

    int format = ChoosePixelFormat(dc, &pfd);
    if(format) {
        SetPixelFormat(dc, format, &pfd);
    }else {
        ReleaseDC(dummyWindow, dc);
        UnregisterClass(L"OpenGlDummyWindow", wc.hInstance);
        return;
    }
    
    HGLRC context = wglCreateContext(dc);
    if(!context) {
        ReleaseDC(dummyWindow, dc);
        UnregisterClass(L"OpenGlDummyWindow", wc.hInstance);
        return;
    }
    if(!wglMakeCurrent(dc, context)) {
        wglMakeCurrent(NULL, NULL);
        wglDeleteContext(context);
        ReleaseDC(dummyWindow, dc);
        UnregisterClass(L"OpenGlDummyWindow", wc.hInstance);
        return;
    }

    wglChoosePixelFormatARB = (PFNWGLCHOOSEPIXELFORMATARBPROC*)wglGetProcAddress("wglChoosePixelFormatARB");
    wglCreateContextAttribsARB = (PFNWGLCREATECONTEXTATTRIBSARBPROC*)wglGetProcAddress("wglCreateContextAttribsARB");


    wglMakeCurrent(NULL, NULL);
    wglDeleteContext(context);
    ReleaseDC(dummyWindow, dc);
    DestroyWindow(dummyWindow);
    UnregisterClass(L"OpenGlDummyWindow", wc.hInstance);
}

int make_win32_opengl_context_current(win32_window* win) {

    HDC hdc = GetDC((HWND)win->handle);

    init_win32_opengl();

    int attribs[] = {
        WGL_DRAW_TO_WINDOW_ARB, GL_TRUE,
        WGL_SUPPORT_OPENGL_ARB, GL_TRUE,
        WGL_DOUBLE_BUFFER_ARB, GL_TRUE,
        WGL_ACCELERATION_ARB, 0x2027,
        WGL_PIXEL_TYPE_ARB, 0x202B,
        WGL_COLOR_BITS_ARB, 32,
        WGL_DEPTH_BITS_ARB, 24,
        WGL_STENCIL_BITS_ARB, 8,
        0
    };

    int format;
    UINT format_count;

    wglChoosePixelFormatARB(hdc, attribs, 0, 1, &format, &format_count);
    if(!format_count) {
        return 0;
    }

    PIXELFORMATDESCRIPTOR pfd;
    DescribePixelFormat(hdc, format, sizeof(pfd), &pfd);
    if(!SetPixelFormat(hdc, format, &pfd)) {
        return 0;
    }

    int opengl_attriblist[] = {
        WGL_CONTEXT_VERSION_MAJOR_ARB, glAttrib.ver_major,
        WGL_CONTEXT_VERSION_MINOR_ARB, glAttrib.ver_minor,
        WGL_CONTEXT_PROFILE_MASK_ARB, WGL_CONTEXT_CORE_PROFILE_BIT_ARB,
        0
    };

    HGLRC context = wglCreateContextAttribsARB(hdc, 0, opengl_attriblist);
    if(!context) {
        return 0;
    }

    if(!wglMakeCurrent(hdc, context)) {
        return 0;
    }

    return 1;
}

void set_opengl_version(int ver_major, int ver_minor) {
    glAttrib.ver_major = ver_major;
    glAttrib.ver_minor = ver_minor;
}