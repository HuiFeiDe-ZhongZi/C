#pragma once
#include <windows.h>

#define DECLARE(ThisClass)\
	CGameApp* CreateObject()\
	{\
		return new ThisClass;\
	}


class CGameApp
{
public:
	HINSTANCE m_hIns;   //  当前的实例句柄
	HWND m_hMainWnd;    //  主窗口
public:
	CGameApp()
	{
		m_hIns = 0;
		m_hMainWnd = 0;
	}
	virtual ~CGameApp()
	{
	
	}
public:
	void SetHandle(HINSTANCE hIns,HWND hwnd)
	{
		m_hIns = hIns;
		m_hMainWnd = hwnd;
	}
public:
	virtual void OnCreateGame() // WM_CREATE
	{
	
	}
	virtual void OnGameDraw() // WM_PAINT
	{
	
	}
	virtual void OnGameRun(WPARAM nTimerID) // WM_TIMER
	{
	
	}
	virtual void OnKeyDown(WPARAM nKey) // WM_KEYDOWN
	{
	
	}
	virtual void OnKeyUp(WPARAM nKey) // WM_KEYUP
	{
	
	}
	virtual void OnLButtonDown(POINT point) // WM_LBUTTONDOWN
	{
	
	}
	virtual void OnLButtonUp(POINT point) // WM_LBUTTONUP
	{
	
	}
	virtual void OnMouseMove(POINT point) // WM_MOUSEMOVE
	{
	
	}
};