#include "PlaneApp.h"
#include "Sys.h"

DECLARE(CPlaneApp)

CPlaneApp::CPlaneApp()
{
}


CPlaneApp::~CPlaneApp()
{
}

void CPlaneApp::OnCreateGame() // WM_CREATE
{
	//1.背景的初始化
	back.InitBack(m_hIns);
	//2.玩家飞机初始化

	//3.启动所有的定时器
	::SetTimer(m_hMainWnd, BACK_MOVE_TIMER_ID, 100, 0);  //  控制背景移动
}
void CPlaneApp::OnGameDraw() // WM_PAINT
{
	PAINTSTRUCT ps = {0};
	HDC hdc = ::BeginPaint(m_hMainWnd, &ps);
	//显示背景
	back.ShowBack(hdc);
	::EndPaint(m_hMainWnd, &ps);
}
void CPlaneApp::OnGameRun(WPARAM nTimerID)// WM_TIMER
{
	if (BACK_MOVE_TIMER_ID == nTimerID)   //背景移动
	{
		back.MoveBack();
	}

	//重绘

	RECT rect = { 0,0,380,550 };
	::InvalidateRect(m_hMainWnd, &rect, FALSE);
}
void CPlaneApp::OnKeyDown(WPARAM nKey) // WM_KEYDOWN
{

}