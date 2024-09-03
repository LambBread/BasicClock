#include "App.h"
#include <raylib.h>
App::App()
{
}
App::~App()
{
}

void App::Run(unsigned int width, unsigned int height, const char* title)
{
	InitWindow(width, height, title);
	OnCreate();
	Loop();
	OnDestroy();
	CloseWindow();
}

void App::Loop()
{
	while(!WindowShouldClose())
	{
		OnBeforeUpdate(GetFrameTime());
		BeginDrawing();
		OnUpdate(GetFrameTime());
		EndDrawing();
	}
}
