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

	//3.�������еĶ�ʱ��
	::SetTimer(m_hMainWnd, BACK_MOVE_TIMER_ID, 100, 0);  //  ���Ʊ����ƶ�
}
void CPlaneApp::OnGameDraw() // WM_PAINT
{
	PAINTSTRUCT ps = {0};
	HDC hdc = ::BeginPaint(m_hMainWnd, &ps);
	//��ʾ����
	back.ShowBack(hdc);
	::EndPaint(m_hMainWnd, &ps);
}
void CPlaneApp::OnGameRun(WPARAM nTimerID)// WM_TIMER
{
	if (BACK_MOVE_TIMER_ID == nTimerID)   //�����ƶ�
	{
		back.MoveBack();
	}

	//�ػ�

	RECT rect = { 0,0,380,550 };
	::InvalidateRect(m_hMainWnd, &rect, FALSE);
}
void CPlaneApp::OnKeyDown(WPARAM nKey) // WM_KEYDOWN
{

}