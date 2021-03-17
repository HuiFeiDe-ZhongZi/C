#include <windows.h>
#include"resource.h"

//��� 
//API
//��Ϣ


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
HBITMAP hBmpWrite = 0;
HBITMAP hBmpBlack = 0;

LRESULT CALLBACK WindowProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam)
{
	switch (uMsg)
	{
	case WM_CREATE:   //���ڴ����ĵ�һ����Ϣ
		//������Դ
		hBmpWrite = ::LoadBitmap(hIns, MAKEINTRESOURCE(IDB_BITMAP1));
		hBmpBlack = ::LoadBitmap(hIns, MAKEINTRESOURCE(IDB_BITMAP2));
		break;
	case WM_PAINT:   //������ʾ���ػ����Ϣ
	{
		//PAINTSTRUCT ps = { 0 };
		////��ȡ���ڵ�DC 
		//HDC hdc = ::BeginPaint(hwnd, &ps);
		////����һ��������DC
		//HDC hdcmen = ::CreateCompatibleDC(hdc);
		////ѡ��һ��ͼƬ
		//::SelectObject(hdcmen, hBmpWrite);
		////����λͼ
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
		//ɾ��ͼƬ
		::DeleteObject(hBmpWrite);
		::DeleteObject(hBmpBlack);
		hBmpWrite = 0;
		hBmpBlack = 0;
		PostQuitMessage(0);
		break;
	}

	return DefWindowProc(hwnd, uMsg, wParam, lParam);
}