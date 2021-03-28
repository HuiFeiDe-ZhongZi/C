#include "Back.h"



CBack::CBack()
{
	x = 0;
	y = 0;
	m_hBmpBackUP = 0;
	m_hBmpBackDOWN = 0;
}


CBack::~CBack()
{
	//É¾³ýÍ¼Æ¬
	::DeleteObject(m_hBmpBackUP);
	::DeleteObject(m_hBmpBackDOWN);
}

void CBack::InitBack(HINSTANCE hIns)
{
	m_hBmpBackUP = ::LoadBitmap(hIns, MAKEINTRESOURCE(IDB_BACK));
	m_hBmpBackDOWN = ::LoadBitmap(hIns, MAKEINTRESOURCE(IDB_BACK));
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
	::SelectObject(hdcmen, m_hBmpBackUP);
	::BitBlt(hdc, x, y-550, 380, 550, hdcmen, 0, 0, SRCCOPY);

	::SelectObject(hdcmen, m_hBmpBackDOWN);
	::BitBlt(hdc, x, y, 380, 550, hdcmen, 0, 0, SRCCOPY);
	::DeleteDC(hdcmen);
}
