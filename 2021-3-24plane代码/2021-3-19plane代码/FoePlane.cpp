#include "FoePlane.h"



CFoePlane::CFoePlane()
{
	x = 0;
	y = 0;
	m_hBmpFoePlane = 0;
	m_nShowID;  //��ʾͼƬ����һ����
	m_nBlood = 0;    //����Ѫ
}


CFoePlane::~CFoePlane()
{
	::DeleteObject(m_hBmpFoePlane);
	m_hBmpFoePlane = 0;
}

bool CFoePlane::IsBoom()
{
	if (m_nBlood == 0)
		return true;
	return false;
}
void CFoePlane::DownBlood()
{
	m_nBlood--;
}
