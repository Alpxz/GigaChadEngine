#pragma once
#include "Prerequisites.h"
#include "Window.h"



class BaseApp
{
public:
	BaseApp() = default;
	~BaseApp() = default;

	HRESULT init();

	void update();

	void render();

	void destroy();

	int run(HINSTANCE hInstance,
		HINSTANCE hPrevInstance,
		LPWSTR lpCmdLine,
		int mCmdShow,
		WNDPROC wndproc);



private:
	Window m_window;
};

