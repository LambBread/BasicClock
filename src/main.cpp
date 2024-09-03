#include "console.h"
#include "MainApp.h"
#ifdef __EMSCRIPTEN__
EM_JS(void, add_option, (), {
	const newOption = document.createElement("span");
	const newCheckbox = document.createElement("input");
	newCheckbox.setAttribute("type", "checkbox");
	newOption.append(newCheckbox);
	const textNode = document.createTextNode("Enable console");
	newOption.append(textNode);
	document.querySelector("#controls").prepend(newOption);
	let consoleEnable = false;
	newCheckbox.addEventListener("click", () =>
	{
		if(!consoleEnable)
		{
			document.querySelector("textarea").style = "display: block;";
		}
		else
		{
			document.querySelector("textarea").style = "display: none;";
		}
		consoleEnable = !consoleEnable;
	});

});
#endif



int main()
{
	HideConsole();
#ifdef __EMSCRIPTEN__
	add_option();
#endif
	MainApp app;
	app.Run(1280, 720, "Basic clock");
}
