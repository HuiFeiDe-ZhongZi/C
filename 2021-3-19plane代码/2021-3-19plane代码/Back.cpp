#include "Back.h"



CBack::CBack()
{
	m_hBmpBackUp= 0;
	m_hBmpBackDown = 0;
	x = 0;
	y = 0;
}


CBack::~CBack()
{
	//É¾³ýÍ¼Æ¬
	DeleteObject(m_hBmpBackUp);
	DeleteObject(m_hBmpBackDown);
}

void CBack::InitBack(HINSTANCE hIns)
{
	m_hBmpBackUp = ::LoadBitmap(hIns, MAKEINTRESOURCE(IDB_BACK));
	m_hBmpBackDown = ::LoadBitmap(hIns, MAKEINTRESOURCE(IDB_BACK));
}

void CBack::MoveBack()
{
	if (y > 550)
		y = 0;
	else
		y++;
}

void CBack::ShowBack(HDC hdc)
{
	HDC hdcmen = ::CreateCompatibleDC(hdc);
	::SelectObject(hdcmen, m_hBmpBackUp);
	::BitBlt(hdc, x, y-550, 380, 550, hdcmen, 0, 0, SRCCOPY);

	::SelectObject(hdcmen, m_hBmpBackUp);
	::BitBlt(hdc, x, y, 380, 550, hdcmen, 0, 0, SRCCOPY);

	::DeleteDC(hdcmen);

}