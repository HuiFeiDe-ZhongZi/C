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
	//1.������ʼ��
	back.InitBack(m_hIns);
	//2.��ʼ����ҷɻ�
	player.InitPlayer(m_hIns);
	//3.�������ж�ʱ��
	::SetTimer(m_hMainWnd, BACK_MOVE_TIMER_ID, 10, 0);  //���Ʊ����ƶ��Ķ�ʱ��
	::SetTimer(m_hMainWnd, PLAYER_MOVE_TIMER_ID, 1, 0);   //��ҷɻ��ƶ�
	::SetTimer(m_hMainWnd, PLAYER_SEND_TIMER_ID, 350, 0);  //��ҷ����ڵ�
	::SetTimer(m_hMainWnd, GUNNER_MOVE_TIMER_ID, 10, 0);   //�����ڵ��ƶ�
	::SetTimer(m_hMainWnd, CREAT_FOEPLANE_TIMER_ID, 1000, 0);  //�������˷ɻ�
	::SetTimer(m_hMainWnd, FOEPLANE_MOVE_TIMER_ID, 10, 0);  //���е��˷ɻ��ƶ�
}
void CPlaneApp::OnGameDraw()
{
	PAINTSTRUCT ps = { 0 };
	HDC hdc = ::BeginPaint(m_hMainWnd, &ps);
	HDC hdcmen = ::CreateCompatibleDC(hdc);
	HBITMAP hBitmap = ::CreateCompatibleBitmap(hdc, 380, 550);
	::SelectObject(hdcmen, hBitmap);
	//----------------------------------------
	back.ShowBack(hdcmen);//��ʾ����
	player.ShowPlayer(hdcmen);//��ʾ��ҷɻ�
	gunbox.AllGunnerShow(hdcmen);//��ʾ���е��ڵ�
	foebox.AllFoePlaneShow(hdcmen);//��ʾ���е��˷ɻ�
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
	if (nTimerID == GUNNER_MOVE_TIMER_ID)          //�ڵ��ƶ�
	{
		gunbox.AllGunnerMove();
		this->GunnerHitFoePlane();   //�ڵ�����˷ɻ�
	}

	if (nTimerID == BACK_MOVE_TIMER_ID)
		back.MoveBack();
	if (nTimerID = PLAYER_MOVE_TIMER_ID)
	{
		if (GetAsyncKeyState(VK_LEFT))         //GetAsyncKeyState��ȡ����״̬
			player.MovePlayer(VK_LEFT);       //ͬһʱ���Ƶ�ʴ���
		if (GetAsyncKeyState(VK_RIGHT))
			player.MovePlayer(VK_RIGHT);
		if (GetAsyncKeyState(VK_UP))
			player.MovePlayer(VK_UP);
		if (GetAsyncKeyState(VK_DOWN))
			player.MovePlayer(VK_DOWN);
	}

	//�ػ�
	RECT rect = { 0,0,380,550 };
	::InvalidateRect(m_hMainWnd, &rect, FALSE);     //InvalidateRect  ˢ������
}
void CPlaneApp::OnKeyDown(WPARAM wParam)
{
	/*player.MovePlayer(wParam);*/
	//�ػ�
	//RECT rect = { 0,0,380,550 };
	//::InvalidateRect(m_hMainWnd, &rect, FALSE);
}

void CPlaneApp::GunnerHitFoePlane()
{
	bool bflag = false;  //���  �ڵ��Ƿ�򵽵��˷ɻ���
	//------------------------------------�������е��ڵ�-----------------------------------------------------------
	list<CGunner*>::iterator iteGun = gunbox.m_lstGunner.begin();
	while (iteGun != gunbox.m_lstGunner.end())
	{
		//---------------------------------�������е��˷ɻ�---------------------------------------------------------
		list<CFoePlane*>::iterator iteFoe = foebox.m_lstFoePlane.begin();
		while (iteFoe != foebox.m_lstFoePlane.end())
		{
			//-------�ж�iteGun�ڵ��Ƿ������iteFoe�ɻ�-------------
			if ((*iteFoe)->IsGunnerHitFoePlane(*iteGun) == true)
			{
				bflag = true;
				//������ɾ���ڵ�
				delete(*iteGun);
				iteGun = gunbox.m_lstGunner.erase(iteGun);
				//���˷ɻ���Ѫ
				(*iteFoe)->DownBlood();
				//�ж��Ƿ�ը
				if ((*iteFoe)->IsBoom() == TRUE)
				{
					//��iteFoe���˷ɻ��ŵ���һ����������ʾ��ը��Ч��
					//ɾ������ڵ�
					foebox.m_lstFoePlane.erase(iteFoe);
				}
				break;
			}
			++iteFoe;
		}
		//---------------------------------�������е��˷ɻ�---------------------------------------------------------
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

