#include <windows.h>
#include"GameApp.h"
#include"Snake.h"

LRESULT CALLBACK WindowProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam);
HINSTANCE hIns = 0;

int CALLBACK WinMain(HINSTANCE hInstance, HINSTANCE hPreInstance, LPSTR lpCmdLine, int nShowCmd)
{
	//-----------------------------------------------------
	HWND hwnd = 0;
	MSG msg;       //  װ��Ϣ�Ľṹ��
	WNDCLASSEX wndclass;
	//-----------------------------------------------------

	hIns = hInstance;

	//----------------------�������ڹ���-----------------------------------
	//  1. ���
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
	// 2.  ע��
	if (RegisterClassEx(&wndclass) == FALSE)
	{
		MessageBox(0, "ע��ʧ��", "��ʾ", MB_OK);
		return 0;
	}
	//  3.  ����
	hwnd = CreateWindow("lele", "O(��_��)O����~", WS_OVERLAPPEDWINDOW, 0, 0, 500, 500, 0, 0, hInstance, 0);
	if (hwnd == 0)
	{
		MessageBox(0, "����ʧ��", "��ʾ", MB_OK);
		return 0;
	}
	//  4.  ��ʾ����
	ShowWindow(hwnd, SW_SHOW);
	//---------------------------�������ڹ���------------------------------------------------



	//----------------------------��Ϣѭ��-------------------------------------------
	while (GetMessage(&msg, 0, 0, 0))
	{
		TranslateMessage(&msg);
		DispatchMessage(&msg);
	}
	//----------------------------��Ϣѭ��-------------------------------------------

	return 0;
}


//=================================������Ϣ========================================================
CGameApp* pApp = 0;
CGameApp* CreatObject();    //���������Ķ���


LRESULT CALLBACK WindowProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam)
{
	switch (uMsg)
	{
	case WM_CREATE:
	{
		pApp= CreatObject();      //����һ����Ϸ������Ķ���
		if (pApp != 0)
		{
			pApp->SetHandle(hIns, hwnd);   //��ǰʵ������봰��
			pApp->OnCreatGame();   //������Ϸ
		}
	}
	break;

	case WM_PAINT:
	{
		if (pApp != 0)
		{
			pApp->OnGameDraw();
		}
	}
	break;

	case WM_TIMER:
	{
		if (pApp != 0)
		{
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

	case WM_LBUTTONDOWN:
	{
		if (pApp != 0)
		{
			POINT point;
			point.x = LOWORD(lParam);
			point.y = HIWORD(lParam);
			pApp->OnButtonDown(point);
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
			pApp->OnButtonUp(point);
		}
	}
	break;

	case WM_MOUSEHOVER:
	{
		if (pApp != 0)
		{
			POINT point;
			point.x = LOWORD(lParam);
			point.y = HIWORD(lParam);
			pApp->OnMouthMove(point);
		}
	}
	break;

	case WM_CLOSE:
		PostQuitMessage(0);
		break;
	}

	return DefWindowProc(hwnd, uMsg, wParam, lParam);
}