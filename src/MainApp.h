#pragma once
#include "App.h"
#include <raylib.h>

class MainApp : public App
{
public:
	MainApp();
	~MainApp() override;
	void OnCreate() override;
	void OnUpdate(float fDeltaTime) override;
	void OnBeforeUpdate(float fDeltaTime) override;
	void OnDestroy() override;
};
