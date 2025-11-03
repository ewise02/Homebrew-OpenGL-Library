#define UNICODE
#include "utility.h"

wchar_t* charToWchar(const char* str) {
    int len = MultiByteToWideChar(CP_UTF8, 0, str, -1, NULL, 0);
    wchar_t* wide_title = malloc(len*sizeof(wchar_t));
    if(!wide_title) {
        return NULL;
    }
    MultiByteToWideChar(CP_UTF8, 0, str, -1, wide_title, len);

    return wide_title;
}