#include <windows.h>
#include "GameApp.h"
#include <time.h>

LRESULT CALLBACK WindowProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam);
HINSTANCE hIns = 0;

int CALLBACK WinMain(HINSTANCE hInstance, HINSTANCE hPreInstance, LPSTR lpCmdLine, int nShowCmd)
{
	srand((unsigned int)time(0));
	//-----------------------------------------------------
	HWND hwnd = 0;
	MSG msg;       //  装消息的结构体
	WNDCLASSEX wndclass;
	//-----------------------------------------------------

	hIns = hInstance;

	//----------------------创建窗口过程-----------------------------------
	//  1. 设计
	wndclass.cbClsExtra = 0;
	wndclass.cbWndExtra = 0;
	wndclass.cbSize = sizeof(wndclass);
	wndclass.hbrBackground = (HBRUSH)COLOR_WINDOW;
	wndclass.hCursor = LoadCursor(0, MAKEINTRESOURCE(IDC_ARROW));
	wndclass.hIcon = 0;
	wndclass.hIconSm = 0;
	wndclass.hInstance = hInstance;
	wndclass.lpfnWndProc = WindowProc;
	wndclass.lpszClassName = "lele";
	wndclass.lpszMenuName = 0;
	wndclass.style = CS_HREDRAW | CS_VREDRAW;
	// 2.  注册
	if (RegisterClassEx(&wndclass) == FALSE)
	{
		MessageBox(0, "注册失败", "提示", MB_OK);
		return 0;
	}
	//  3.  创建
	hwnd = CreateWindow("lele", "O(∩_∩)O哈哈~", WS_OVERLAPPEDWINDOW, 0, 0, 380 + 16, 550 + 38, 0, 0, hInstance, 0);
	if (hwnd == 0)
	{
		MessageBox(0, "创建失败", "提示", MB_OK);
		return 0;
	}
	//  4.  显示窗口
	ShowWindow(hwnd, SW_SHOW);
	//---------------------------创建窗口过程------------------------------------------------



	//----------------------------消息循环-------------------------------------------
	while (GetMessage(&msg, 0, 0, 0))
	{
		TranslateMessage(&msg);
		DispatchMessage(&msg);
	}
	//----------------------------消息循环-------------------------------------------

	return 0;
}


//=================================处理消息========================================================
CGameApp* pApp = 0;
CGameApp* CreateObject();   //  创建一个子类的对象

LRESULT CALLBACK WindowProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam)
{
	switch (uMsg)
	{
	case WM_CREATE:
	{
		//  创建一个 游戏的子类的对象
		pApp = CreateObject();
		if (pApp != 0)
		{
			pApp->SetHandle(hIns, hwnd);
			//  加载资源初始化游戏
			pApp->OnCreateGame();
		}
	}
	break;
	case WM_PAINT:
	{
		if (pApp != 0)
		{
			//  游戏重绘
			pApp->OnGameDraw();
		}
	}
	break;
	case WM_TIMER:
	{
		if (pApp != 0)
		{
			//  游戏运行
			pApp->OnGameRun(wParam);
		}
	}
	break;
	case WM_KEYDOWN:
	{
		if (pApp != 0)
		{
			pApp->OnKeyDown(wParam);
		}
	}
	break;
	case WM_KEYUP:
	{
		if (pApp != 0)
		{
			pApp->OnKeyUp(wParam);
		}
	}
	break;
	case WM_LBUTTONUP:
	{
		if (pApp != 0)
		{
			POINT point;
			point.x = LOWORD(lParam);
			point.y = HIWORD(lParam);
			pApp->OnLButtonUp(point);
		}
	}
	break;
	case WM_LBUTTONDOWN:
	{
		if (pApp != 0)
		{
			POINT point;
			point.x = LOWORD(lParam);
			point.y = HIWORD(lParam);
			pApp->OnLButtonDown(point);
		}
	}
	break;
	case WM_MOUSEMOVE:
	{
		if (pApp != 0)
		{
			POINT point;
			point.x = LOWORD(lParam);
			point.y = HIWORD(lParam);
			pApp->OnMouseMove(point);
		}
	}
	break;
	case WM_CLOSE:
		//  删除游戏的对象
		delete pApp;
		pApp = 0;
		PostQuitMessage(0);
		break;
	}

	return DefWindowProc(hwnd, uMsg, wParam, lParam);
}