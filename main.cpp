#include <Windows.h>
#include <wingdi.h>

int main() {
    HWND Window = GetConsoleWindow();
    HDC hdc = GetDC(Window);
    for (int y = 0; y != 100; y++) {
        for (int x = 0; x != 50; x++) {
            SetPixel(hdc, x, y, RGB(255, 2, 2));
        }
    }
    return 0;
}
