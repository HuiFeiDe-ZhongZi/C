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
	//1.�����ĳ�ʼ��
	back.InitBack(m_hIns);
	//2.��ҷɻ���ʼ��
	plane.InitPlayer(m_hIns);
	//3.�������еĶ�ʱ��
	::SetTimer(m_hMainWnd, BACK_MOVE_TIMER_ID, 100, 0);  //  ���Ʊ����ƶ�
	::SetTimer(m_hMainWnd, PLANE_MOVE_TIMER_ID, 1, 0);   //��ҷɻ��ƶ�
	::SetTimer(m_hMainWnd, SEND_GUNNER_TIMER_ID, 200, 0); //������ҷɻ����ڵ�
	::SetTimer(m_hMainWnd, GUNNER_MOVE_TIMER_ID, 10, 0);  //�����ڵ��ƶ�
	::SetTimer(m_hMainWnd, CREATE_FOEPLANE_TIMER_ID,1200, 0);   //�������˷ɻ�
	::SetTimer(m_hMainWnd, FOEPLANE_MOVE_TIMER_ID, 20, 0);	 //���˷ɻ��ƶ�
}
void CPlaneApp::OnGameDraw() // WM_PAINT
{
	PAINTSTRUCT ps = { 0 };
	HDC hdc = ::BeginPaint(m_hMainWnd, &ps);

	HDC hdcmen = ::CreateCompatibleDC(hdc);
	HBITMAP hBitmap = ::CreateCompatibleBitmap(hdc, 380, 550);	//����һ��λͼ
	::SelectObject(hdcmen, hBitmap);
	//-----------------------------------------------------
	back.ShowBack(hdcmen);//��ʾ����
	plane.ShowPlayer(hdcmen); //��ʾ��ҷɻ�
	gunbox.AllGunnerShow(hdcmen);  //��ʾ�ڵ�
	foebox.AllFoePlaneShow(hdcmen);//��ʾ���˷ɻ�
	//-----------------------------------------------------
	::BitBlt(hdc, 0, 0, 380, 550, hdcmen, 0, 0, SRCCOPY);
	::DeleteObject(hBitmap);
	::DeleteDC(hdcmen);
	::EndPaint(m_hMainWnd, &ps);
}
void CPlaneApp::OnGameRun(WPARAM nTimerID)// WM_TIMER
{
	//���˷ɻ��ƶ�
	if (nTimerID == FOEPLANE_MOVE_TIMER_ID)
	{
		foebox.AllFoePlaneMove();
	}
	//�������˷ɻ�
	if (nTimerID == CREATE_FOEPLANE_TIMER_ID)
	{
		foebox.CreatFoePlane(m_hIns);
	}
	//�����ڵ�
	if (nTimerID == SEND_GUNNER_TIMER_ID)
		plane.SendGunner(m_hIns, gunbox);
	//�ڵ��ƶ�
	if (nTimerID == GUNNER_MOVE_TIMER_ID)
	{
		gunbox.AllGunnerMove();
		//�ж��ڵ�����˷ɻ�
		this->GunnerHitFoePlane();
	}


	if (nTimerID == PLANE_MOVE_TIMER_ID)
	{
		if (::GetAsyncKeyState(VK_LEFT))
			plane.MovePlayer(VK_LEFT);
		if (::GetAsyncKeyState(VK_RIGHT))  //��ð���״̬
			plane.MovePlayer(VK_RIGHT);
		if (::GetAsyncKeyState(VK_UP))
			plane.MovePlayer(VK_UP);
		if (::GetAsyncKeyState(VK_DOWN))
			plane.MovePlayer(VK_DOWN);
	}

	//�����ƶ�
	if (BACK_MOVE_TIMER_ID == nTimerID)
	{
		back.MoveBack();
	}

	//�ػ�
	//this->OnGameDraw();     getDCʱʹ��
	RECT rect = { 0,0,380,550 };
	::InvalidateRect(m_hMainWnd, &rect, FALSE);
}
void CPlaneApp::OnKeyDown(WPARAM nKey) // WM_KEYDOWN
{
	//plane.MovePlayer(nKey);  //��ҷɻ��ƶ�
	////�ػ�
	////this->OnGameDraw
	//RECT rect = { 0,0,380,550 };
	//::InvalidateRect(m_hMainWnd, &rect, FALSE);
}

void CPlaneApp::GunnerHitFoePlane()
{
	bool bflag = false;    //  ���  �ڵ��Ƿ�򵽵��˷ɻ�

	//----�������е��ڵ�
	list<CGunner*>::iterator iteGun = gunbox.m_lstGunner.begin();
	while (iteGun != gunbox.m_lstGunner.end())
	{
		//---------����һ����˷ɻ�
		list<CFoePlane*>::iterator iteFoe = foebox.m_lstFoePlane.begin();
		while (iteFoe != foebox.m_lstFoePlane.end())
		{
			//�ж��ڵ��Ƿ�����˵��˷ɻ�
			if ((*iteFoe)->IsGunnerHitFoePlane(*iteGun) == true)
			{
				bflag = true;
				//ɾ���ڵ�
				delete(*iteGun);
				iteGun = gunbox.m_lstGunner.erase(iteGun);
				//���˷ɻ���Ѫ
				(*iteFoe)->DownBlood();
				//�ж��Ƿ�ը
				if ((*iteFoe)->IsBoom() == true)
				{
					//�ѵ��˷ɻ��ŵ���һ����������ʾ��ը
					//ɾ������ڵ�
					foebox.m_lstFoePlane.erase(iteFoe);
				}
				break;
			}
			++iteFoe;
		}
		//-----------�������е��˷ɻ�---------------
		if (bflag == false)
			++iteGun;
		else
			bflag = false;
	}
}