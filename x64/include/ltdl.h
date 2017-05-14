/* Compatibility header for libtool on Windows. */

#ifndef LTDL_H
#define LTDL_H 1

#include <Windows.h>

typedef HMODULE lt_dlhandle;
typedef void* lt_ptr;

int lt_dlinit()
{
    return 0;
}

const char* lt_dlerror()
{
    return "not implemented";
}

lt_dlhandle lt_dlopen(char* p)
{
    return LoadLibrary(p);
}

void* lt_dlsym(lt_dlhandle hndl, char* s)
{
    return GetProcAddress(hndl, s);
}

#endif /* !LTDL_H */
