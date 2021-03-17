#include <windows.h>
#include"resource.h"

//句柄 
//API
//消息


LRESULT CALLBACK WindowProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam);
HINSTANCE hIns = 0;

int CALLBACK WinMain(HINSTANCE hInstance, HINSTANCE hPreInstance, LPSTR lpCmdLine, int nShowCmd)
{
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
	hwnd = CreateWindow("lele", "O(∩_∩)O哈哈~", WS_OVERLAPPEDWINDOW, 0, 0, 500, 500, 0, 0, hInstance, 0);
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
HBITMAP hBmpWrite = 0;
HBITMAP hBmpBlack = 0;

LRESULT CALLBACK WindowProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam)
{
	switch (uMsg)
	{
	case WM_CREATE:   //窗口创建的第一个消息
		//加载资源
		hBmpWrite = ::LoadBitmap(hIns, MAKEINTRESOURCE(IDB_BITMAP1));
		hBmpBlack = ::LoadBitmap(hIns, MAKEINTRESOURCE(IDB_BITMAP2));
		break;
	case WM_PAINT:   //窗口显示，重绘的消息
	{
		//PAINTSTRUCT ps = { 0 };
		////获取窗口的DC 
		//HDC hdc = ::BeginPaint(hwnd, &ps);
		////创建一个兼容性DC
		//HDC hdcmen = ::CreateCompatibleDC(hdc);
		////选入一张图片
		//::SelectObject(hdcmen, hBmpWrite);
		////传输位图
		//::BitBlt(hdc, 0, 0, 30, 30, hdcmen, 0, 0, SRCCOPY);

		//::DeleteDC(hMemDC);
		//::EndPaint(hwnd, &ps);

		PAINTSTRUCT ps = { 0 };
		HDC hdc=BeginPaint(hwnd, &ps);
		HDC hdcmen  =CreateCompatibleDC(hdc);
		SelectObject(hdcmen, hBmpWrite);
		BitBlt(hdc, 0, 0, 30, 30, hdcmen, 0, 0, SRCCOPY);

		DeleteDC(hdcmen);
		EndPaint(hwnd, &ps);
	}
	break;
	case WM_CLOSE:
		//删除图片
		::DeleteObject(hBmpWrite);
		::DeleteObject(hBmpBlack);
		hBmpWrite = 0;
		hBmpBlack = 0;
		PostQuitMessage(0);
		break;
	}

	return DefWindowProc(hwnd, uMsg, wParam, lParam);
}