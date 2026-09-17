#include <windows.h>

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance,
                   LPSTR lpCmdLine, int nCmdShow)
{
    MessageBoxA(
        NULL,
        "U GOT BUSTED\n\nCanary Test triggered!",
        "SECURITY ALERT",
        MB_OK | MB_ICONWARNING
    );

    return 0;
}