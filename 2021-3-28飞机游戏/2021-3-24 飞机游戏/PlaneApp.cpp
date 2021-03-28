#include "PlaneApp.h"


DECLARE(CPlaneApp);
CPlaneApp::CPlaneApp()
{
}


CPlaneApp::~CPlaneApp()
{
}

void CPlaneApp::OnCreateGame()
{
	//1.背景初始化
	back.InitBack(m_hIns);
	//2.初始化玩家飞机
	player.InitPlayer(m_hIns);
	//3.启动所有定时器
	::SetTimer(m_hMainWnd, BACK_MOVE_TIMER_ID, 10, 0);  //控制背景移动的定时器
	::SetTimer(m_hMainWnd, PLAYER_MOVE_TIMER_ID, 1, 0);   //玩家飞机移动
	::SetTimer(m_hMainWnd, PLAYER_SEND_TIMER_ID, 350, 0);  //玩家发射炮弹
	::SetTimer(m_hMainWnd, GUNNER_MOVE_TIMER_ID, 10, 0);   //所有炮弹移动
	::SetTimer(m_hMainWnd, CREAT_FOEPLANE_TIMER_ID, 1000, 0);  //创建敌人飞机
	::SetTimer(m_hMainWnd, FOEPLANE_MOVE_TIMER_ID, 10, 0);  //所有敌人飞机移动
}
void CPlaneApp::OnGameDraw()
{
	PAINTSTRUCT ps = { 0 };
	HDC hdc = ::BeginPaint(m_hMainWnd, &ps);
	HDC hdcmen = ::CreateCompatibleDC(hdc);
	HBITMAP hBitmap = ::CreateCompatibleBitmap(hdc, 380, 550);
	::SelectObject(hdcmen, hBitmap);
	//----------------------------------------
	back.ShowBack(hdcmen);//显示背景
	player.ShowPlayer(hdcmen);//显示玩家飞机
	gunbox.AllGunnerShow(hdcmen);//显示所有的炮弹
	foebox.AllFoePlaneShow(hdcmen);//显示所有敌人飞机
	//----------------------------------------
	::BitBlt(hdc, 0, 0, 380, 550, hdcmen, 0, 0, SRCCOPY);
	::EndPaint(m_hMainWnd, &ps);
	::DeleteDC(hdcmen);
	::DeleteObject(hBitmap);
}
void CPlaneApp::OnGameRun(WPARAM nTimerID)
{
	if (nTimerID == CREAT_FOEPLANE_TIMER_ID)
		foebox.CreatFoePlane(m_hIns);

	if (nTimerID == FOEPLANE_MOVE_TIMER_ID)
		foebox.AllFoePlaneMove();

	if (nTimerID == PLAYER_SEND_TIMER_ID)
		player.SendGunner(m_hIns, gunbox);
	if (nTimerID == GUNNER_MOVE_TIMER_ID)          //炮弹移动
	{
		gunbox.AllGunnerMove();
		this->GunnerHitFoePlane();   //炮弹打敌人飞机
	}

	if (nTimerID == BACK_MOVE_TIMER_ID)
		back.MoveBack();
	if (nTimerID = PLAYER_MOVE_TIMER_ID)
	{
		if (GetAsyncKeyState(VK_LEFT))         //GetAsyncKeyState获取按键状态
			player.MovePlayer(VK_LEFT);       //同一时间点频率大了
		if (GetAsyncKeyState(VK_RIGHT))
			player.MovePlayer(VK_RIGHT);
		if (GetAsyncKeyState(VK_UP))
			player.MovePlayer(VK_UP);
		if (GetAsyncKeyState(VK_DOWN))
			player.MovePlayer(VK_DOWN);
	}

	//重绘
	RECT rect = { 0,0,380,550 };
	::InvalidateRect(m_hMainWnd, &rect, FALSE);     //InvalidateRect  刷新区域
}
void CPlaneApp::OnKeyDown(WPARAM wParam)
{
	/*player.MovePlayer(wParam);*/
	//重绘
	//RECT rect = { 0,0,380,550 };
	//::InvalidateRect(m_hMainWnd, &rect, FALSE);
}

void CPlaneApp::GunnerHitFoePlane()
{
	bool bflag = false;  //标记  炮弹是否打到敌人飞机的
	//------------------------------------遍历所有的炮弹-----------------------------------------------------------
	list<CGunner*>::iterator iteGun = gunbox.m_lstGunner.begin();
	while (iteGun != gunbox.m_lstGunner.end())
	{
		//---------------------------------遍历所有敌人飞机---------------------------------------------------------
		list<CFoePlane*>::iterator iteFoe = foebox.m_lstFoePlane.begin();
		while (iteFoe != foebox.m_lstFoePlane.end())
		{
			//-------判断iteGun炮弹是否打中了iteFoe飞机-------------
			if ((*iteFoe)->IsGunnerHitFoePlane(*iteGun) == true)
			{
				bflag = true;
				//打中了删除炮弹
				delete(*iteGun);
				iteGun = gunbox.m_lstGunner.erase(iteGun);
				//敌人飞机掉血
				(*iteFoe)->DownBlood();
				//判断是否爆炸
				if ((*iteFoe)->IsBoom() == TRUE)
				{
					//把iteFoe敌人飞机放到另一个链表里显示爆炸的效果
					//删除这个节点
					foebox.m_lstFoePlane.erase(iteFoe);
				}
				break;
			}
			++iteFoe;
		}
		//---------------------------------遍历所有敌人飞机---------------------------------------------------------
		if (bflag == false)
		{
			++iteGun;
		}
		else
		{
			bflag = false;
		}
	}

}
//bool CPlaneApp::IsGameOver()
//{
//
//}

