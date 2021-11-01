#include <windows.h> 

int WINAPI 
WinMain (HINSTANCE hInstance, HINSTANCE hPrevInst, LPTSTR lpCmdLine, int nShowCmd) 
{ 
	MessageBoxW (NULL, L"Hello World!", L"Caption", MB_OK | MB_ICONINFORMATION); 
	return 0; 
}
