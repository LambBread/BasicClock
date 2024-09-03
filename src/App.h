#pragma once

//base class for apps
class App
{
public:
	App();
	virtual ~App();
	virtual void OnCreate() = 0;
	virtual void OnUpdate(float) = 0;
	virtual void OnBeforeUpdate(float) = 0;
	virtual void OnDestroy() = 0;
	void Run(unsigned int width, unsigned int height, const char* title);
private:
	void Loop();
};
