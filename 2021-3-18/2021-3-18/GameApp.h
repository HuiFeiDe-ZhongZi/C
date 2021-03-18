#pragma once
#include<Windows.h>

#define DECLARE(ThisClass)\
CGameApp* CreatObject()\
{\
	return new ThisClass;\
}

class CGameApp
{
public:
	HINSTANCE m_hIns;
	HWND m_hwnd;
public:
	CGameApp()
	{
		m_hIns = 0;
		m_hwnd = 0;
	}
	~CGameApp()
	{

	}
public:
	void SetHandle(HINSTANCE hIns, HWND hwnd)
	{
		m_hIns = hIns;
		m_hwnd = hwnd;
	}
public:
	virtual void OnCreatGame(){}
	virtual void OnGameDraw(){}
	virtual void OnGameRun(WPARAM nTimerId){}
	virtual void OnKeyDown(WPARAM nKey){}
	virtual void OnKeyUp(WPARAM nKey){}
	virtual void OnButtonDown(POINT point){}
	virtual void OnButtonUp(POINT point){}
	virtual void OnMouthMove(POINT point){}

};