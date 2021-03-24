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
	::SetTimer(m_hMainWnd, SEND_GUNNER_TIMER_ID, 200, 0); //控制玩家飞机发炮弹
	::SetTimer(m_hMainWnd, GUNNER_MOVE_TIMER_ID, 10, 0);  //控制炮弹移动
	::SetTimer(m_hMainWnd, CREATE_FOEPLANE_TIMER_ID, 1200, 0);   //创建敌人飞机
	::SetTimer(m_hMainWnd, FOEPLANE_MOVE_TIMER_ID, 20, 0);	 //敌人飞机移动 
	::SetTimer(m_hMainWnd, CHANGE_SHOEID_TIMER_ID, 200, 0); //爆炸的敌人飞机
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
	gunbox.AllGunnerShow(hdcmen);  //显示炮弹
	foebox.AllFoePlaneShow(hdcmen);//显示敌人飞机
	blastbox.AllBlastFoePlaneShow(hdcmen);//显示爆炸的敌人飞机
	//-----------------------------------------------------
	::BitBlt(hdc, 0, 0, 380, 550, hdcmen, 0, 0, SRCCOPY);
	::DeleteObject(hBitmap);
	::DeleteDC(hdcmen);
	::EndPaint(m_hMainWnd, &ps);
}
void CPlaneApp::OnGameRun(WPARAM nTimerID)// WM_TIMER
{
	if (nTimerID == CHANGE_SHOEID_TIMER_ID)
	{
		blastbox.ChangeShowId();
	}
	//敌人飞机移动
	if (nTimerID == FOEPLANE_MOVE_TIMER_ID)
	{
		foebox.AllFoePlaneMove();
	}
	//创建敌人飞机
	if (nTimerID == CREATE_FOEPLANE_TIMER_ID)
	{
		foebox.CreatFoePlane(m_hIns);
	}
	//发射炮弹
	if (nTimerID == SEND_GUNNER_TIMER_ID)
	{
		plane.SendGunner(m_hIns, gunbox);
		if (this->IsGameOver() == true)
		{
			::KillTimer(m_hMainWnd, BACK_MOVE_TIMER_ID);       //  控制背景移动
			::KillTimer(m_hMainWnd, PLANE_MOVE_TIMER_ID);        //  控制玩家飞机移动
			::KillTimer(m_hMainWnd, SEND_GUNNER_TIMER_ID);        // 控制玩家飞机发射炮弹
			::KillTimer(m_hMainWnd, GUNNER_MOVE_TIMER_ID);        //  控制所有炮弹移动
			::KillTimer(m_hMainWnd, CREATE_FOEPLANE_TIMER_ID);   //  创建敌人飞机
			::KillTimer(m_hMainWnd, FOEPLANE_MOVE_TIMER_ID);   //  创建敌人移动
			::KillTimer(m_hMainWnd, CHANGE_SHOEID_TIMER_ID);
			MessageBox(0, "GameOver", "提示", MB_OK);
		}
	}

	//炮弹移动
	if (nTimerID == GUNNER_MOVE_TIMER_ID)
	{
		gunbox.AllGunnerMove();
		//判断炮弹打敌人飞机
		this->GunnerHitFoePlane();
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

void CPlaneApp::GunnerHitFoePlane()
{
	bool bflag = false;    //  标记  炮弹是否打到敌人飞机

	//----遍历所有的炮弹
	list<CGunner*>::iterator iteGun = gunbox.m_lstGunner.begin();
	while (iteGun != gunbox.m_lstGunner.end())
	{
		//---------遍历一遍敌人飞机
		list<CFoePlane*>::iterator iteFoe = foebox.m_lstFoePlane.begin();
		while (iteFoe != foebox.m_lstFoePlane.end())
		{
			//判断炮弹是否打中了敌人飞机
			if ((*iteFoe)->IsGunnerHitFoePlane(*iteGun) == true)
			{
				bflag = true;
				//删除炮弹
				delete(*iteGun);
				iteGun = gunbox.m_lstGunner.erase(iteGun);
				//敌人飞机掉血
				(*iteFoe)->DownBlood();
				//判断是否爆炸
				if ((*iteFoe)->IsBoom() == true)
				{
					//把敌人飞机放到另一个链表里显示爆炸
					blastbox.m_lstBlastFoePlane.push_back(*iteFoe);
					//删除这个节点
					foebox.m_lstFoePlane.erase(iteFoe);
				}
				break;
			}
			++iteFoe;
		}
		//-----------遍历所有敌人飞机---------------
		if (bflag == false)
			++iteGun;
		else
			bflag = false;
	}
}

bool CPlaneApp::IsGameOver()
{
	list<CFoePlane*>::iterator ite = foebox.m_lstFoePlane.begin();
	while (ite != foebox.m_lstFoePlane.end())
	{
		if ((*ite)->IsHitPlayer(plane) == true)
			return true;
		++ite;
	}
	return false;
}