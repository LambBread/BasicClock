#ifdef _WIN32
#include "console.h"
#define WIN32_LEAN_AND_MEAN
#include <Windows.h>
void HideConsole()
{
	ShowWindow(GetConsoleWindow(), SW_HIDE);
}
void ShowConsole()
{
	ShowWindow(GetConsoleWindow(), SW_SHOW);
}

bool IsConsoleVisible()
{
	return IsWindowVisible(GetConsoleWindow()) != FALSE;
}

#endif
