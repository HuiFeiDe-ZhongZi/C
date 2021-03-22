#include "Gunner.h"



CGunner::CGunner()
{
	x = 0;
	y = 0;
    m_hBmpGunner = 0;
}


CGunner::~CGunner()
{
}

void CGunner::InitGunner(HINSTANCE hIns, int x1, int y1)
{
	//初始化
	x = x1;
	y = y1;
	//加载位图
	m_hBmpGunner = ::LoadBitmap(hIns, MAKEINTRESOURCE(IDB_GUNNER));
}
void CGunner::MoveGunner()
{
	y -= 10;
}
void CGunner::ShowGunner(HDC hdc)
{
	HDC hdcmen = ::CreateCompatibleDC(hdc);
	::SelectObject(hdcmen, m_hBmpGunner);
	::BitBlt(hdc, x, y, 6, 9, hdcmen, 0, 0, SRCAND);
	::DeleteDC(hdcmen);
}
