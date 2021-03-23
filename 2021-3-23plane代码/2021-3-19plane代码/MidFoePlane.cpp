#include "MidFoePlane.h"



CMidFoePlane::CMidFoePlane()
{
	x = rand() %(380-70) ;
	y = -90;
	m_nBlood = 3;
	m_nShowID = 2;
}


CMidFoePlane::~CMidFoePlane()
{
}


bool CMidFoePlane::IsGunnerHitFoePlane(CGunner *pGunner)
{
	if (pGunner->x >= this->x && pGunner->x <= this->x + 70
		&& pGunner->y >= this->y && pGunner->y <= this->y + 90)
		return true;
	return false;

}
bool CMidFoePlane::IsHitPlayer(CPlayer& plane)
{
	return false;
}
void CMidFoePlane::InitFoePlane(HINSTANCE hIns)
{
	m_hBmpFoePlane = ::LoadBitmap(hIns, MAKEINTRESOURCE(IDB_MID));
}
void CMidFoePlane::ShowFoePlane(HDC hdc)
{
	HDC hdcmen = ::CreateCompatibleDC(hdc);
	::SelectObject(hdcmen, m_hBmpFoePlane);
	::BitBlt(hdc, x, y, 70, 90, hdcmen, 0, (2 - m_nShowID) * 90, SRCAND);
	::DeleteDC(hdcmen);
}
void CMidFoePlane::FoePlaneMove()
{
	y += 4;
}
