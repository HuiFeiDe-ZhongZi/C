#include "SmallFoePlane.h"



CSmallFoePlane::CSmallFoePlane()
{
	m_nBlood = 1;
	x = rand() % (380 - 34);
	y = -28;
	m_nShowID = 1;
}


CSmallFoePlane::~CSmallFoePlane()
{
	::DeleteObject(m_hBmpFoePlane);
	m_hBmpFoePlane = 0;
}

void CSmallFoePlane::InitFoePlane(HINSTANCE hIns)
{
	m_hBmpFoePlane = ::LoadBitmap(hIns, MAKEINTRESOURCE(IDB_SMALL));
}
void CSmallFoePlane::FoePlaneMove()
{
	y += 6;
}
void CSmallFoePlane::ShowFoePlane(HDC hdc)
{
	HDC hdcmen = ::CreateCompatibleDC(hdc);
	::SelectObject(hdcmen, m_hBmpFoePlane);
	::BitBlt(hdc, x, y, 34, 28, hdcmen, 0, (1 - m_nShowID) * 28, SRCAND);
	::DeleteDC(hdcmen);
}
bool CSmallFoePlane::IsHitPlayer(CPlayer& plane)
{
	return false;
}
bool CSmallFoePlane::IsGunnerHitFoePlane(CGunner* pGunner)
{
	if (pGunner->x >= this->x && pGunner->x <= this->x + 34
		&& pGunner->y >= this->y && pGunner->y <= this->y + 28)
		return true;
	return false;
}