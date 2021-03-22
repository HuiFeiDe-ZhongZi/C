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
	plane.InitPlayer(m_hIns);
	//3.启动所有的定时器
	::SetTimer(m_hMainWnd, BACK_MOVE_TIMER_ID, 100, 0);  //  控制背景移动
	::SetTimer(m_hMainWnd, PLANE_MOVE_TIMER_ID, 1, 0);   //玩家飞机移动
	::SetTimer(m_hMainWnd, SEND_GUNNER_TIMER_ID, 350, 0); //控制玩家飞机发炮弹
	::SetTimer(m_hMainWnd, GUNNER_MOVE_TIMER_ID, 10, 0);  //控制炮弹移动
}
void CPlaneApp::OnGameDraw() // WM_PAINT
{
	PAINTSTRUCT ps = { 0 };
	HDC hdc = ::BeginPaint(m_hMainWnd, &ps);

	HDC hdcmen = ::CreateCompatibleDC(hdc);
	HBITMAP hBitmap = ::CreateCompatibleBitmap(hdc, 380, 550);	//创建一个位图
	::SelectObject(hdcmen, hBitmap);
	//-----------------------------------------------------
	back.ShowBack(hdcmen);//显示背景
	plane.ShowPlayer(hdcmen); //显示玩家飞机
	box.AllGunnerShow(hdcmen);  //显示炮弹
	//-----------------------------------------------------
	::BitBlt(hdc, 0, 0, 380, 550, hdcmen, 0, 0, SRCCOPY);
	::DeleteObject(hBitmap);
	::DeleteDC(hdcmen);
	::EndPaint(m_hMainWnd, &ps);
}
void CPlaneApp::OnGameRun(WPARAM nTimerID)// WM_TIMER
{
	//发射炮弹
	if (nTimerID == SEND_GUNNER_TIMER_ID)
		plane.SendGunner(m_hIns, box);
	//炮弹移动
	if (nTimerID == GUNNER_MOVE_TIMER_ID)
	{
		box.AllGunnerMove();
	}


	if (nTimerID == PLANE_MOVE_TIMER_ID)
	{
		if (::GetAsyncKeyState(VK_LEFT))
			plane.MovePlayer(VK_LEFT);
		if (::GetAsyncKeyState(VK_RIGHT))  //获得按键状态
			plane.MovePlayer(VK_RIGHT);
		if (::GetAsyncKeyState(VK_UP))
			plane.MovePlayer(VK_UP);
		if (::GetAsyncKeyState(VK_DOWN))
			plane.MovePlayer(VK_DOWN);
	}

	//背景移动
	if (BACK_MOVE_TIMER_ID == nTimerID)
	{
		back.MoveBack();
	}

	//重绘
	//this->OnGameDraw();     getDC时使用
	RECT rect = { 0,0,380,550 };
	::InvalidateRect(m_hMainWnd, &rect, FALSE);
}
void CPlaneApp::OnKeyDown(WPARAM nKey) // WM_KEYDOWN
{
	//plane.MovePlayer(nKey);  //玩家飞机移动
	////重绘
	////this->OnGameDraw
	//RECT rect = { 0,0,380,550 };
	//::InvalidateRect(m_hMainWnd, &rect, FALSE);
}