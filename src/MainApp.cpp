#include "MainApp.h"
#include <chrono>
#include <string>
#include <ctime>

void DrawTextCenter(const char* text, Vector2 offset, Color color, int fontsize)
{
	Vector2 textSize = MeasureTextEx(GetFontDefault(), text, fontsize, 1);
	Vector2 textPos = {(GetScreenWidth() - textSize.x) / 2, (GetScreenHeight() - textSize.y) / 2};
	DrawText(text, textPos.x + offset.x, textPos.y + offset.y, fontsize, color);
}

MainApp::MainApp()
{
}
MainApp::~MainApp()
{
}
void MainApp::OnCreate()
{
}
void MainApp::OnUpdate(float fDeltaTime)
{
	ClearBackground(RAYWHITE);
	//DrawText("Congrats! You created your first window~", 190, 200, 20, LIGHTGRAY);
	auto now = std::chrono::system_clock::now();
	std::time_t now_c = std::chrono::system_clock::to_time_t(now);
	std::string timedate = std::string(std::ctime(&now_c));
	std::string time = timedate.substr(11, 8);
	std::string date = timedate.substr(4, 7) + timedate.substr(20, 4);

	DrawTextCenter(time.c_str(),{0.0f,0.0f},BLACK, 84);
	DrawTextCenter(date.c_str(),{0.0f,50.0f}, LIGHTGRAY, 36);
}
void MainApp::OnBeforeUpdate(float fDeltaTime)
{
}
void MainApp::OnDestroy()
{
}
