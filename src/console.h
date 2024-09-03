#pragma once
#include <iostream>
#ifdef __EMSCRIPTEN__
#include <emscripten.h>
#endif

#ifdef __EMSCRIPTEN__
EM_JS(void, HideConsole, (), {
	document.querySelector("textarea").style = "display: none;";
});
EM_JS(void, ShowConsole, (), {
	document.querySelector("textarea").style = "display: block;";
});
EM_JS(bool, IsConsoleVisible, (), {
	if(!document.querySelector("textarea").hasAttribute("style") 
	|| document.querySelector("textarea").getAttribute("style") == "display: block;")
	{
		return true;
	}
	else
	{
		return false;
	}
});
#elif defined(_WIN32)
void HideConsole();
void ShowConsole();
bool IsConsoleVisible();
#else
inline void HideConsole()
{
	std::cerr << "warning: cannot hide console outside web and Windows\n";
}
inline void ShowConsole()
{
	std::cerr << "warning: cannot show console outside web and Windows\n";
}
inline bool IsConsoleVisible()
{
	return true;
}
#endif
