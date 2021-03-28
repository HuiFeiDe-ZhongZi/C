#include "Gunner.h"



CGunner::CGunner()
{
	x = 0;
	y = 0;
	m_hBmpGunner = 0;
}


CGunner::~CGunner()
{
	::DeleteObject(m_hBmpGunner);
	m_hBmpGunner = 0;
}


void CGunner::InitGunner(HINSTANCE hIns, int x1, int y1)
{
	m_hBmpGunner = ::LoadBitmap(hIns, MAKEINTRESOURCE(IDB_GUNNER));
	x = x1;
	y = y1;
}
void CGunner::ShowGunner(HDC hdc)
{
	HDC hdcmen = ::CreateCompatibleDC(hdc);
	::SelectObject(hdcmen, m_hBmpGunner);
	::BitBlt(hdc, x, y, 6,9, hdcmen, 0, 0, SRCAND);
	::DeleteDC(hdcmen);
}
void CGunner::MoveGunner()
{
	y -= 10;
}