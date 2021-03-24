#include "BlastFoePlaneBox.h"



CBlastFoePlaneBox::CBlastFoePlaneBox()
{
}


CBlastFoePlaneBox::~CBlastFoePlaneBox()
{
	list<CFoePlane*>::iterator ite = m_lstBlastFoePlane.begin();
	while (ite != m_lstBlastFoePlane.end())
	{
		delete(*ite);
		ite = m_lstBlastFoePlane.erase(ite);
	}
}


void CBlastFoePlaneBox::AllBlastFoePlaneShow(HDC hdc)
{
	list<CFoePlane*>::iterator ite = m_lstBlastFoePlane.begin();
	while (ite != m_lstBlastFoePlane.end())
	{
		(*ite)->ShowFoePlane(hdc);
		++ite;
	}
}
void CBlastFoePlaneBox::ChangeShowId()
{
	list<CFoePlane*>::iterator ite = m_lstBlastFoePlane.begin();
	while (ite != m_lstBlastFoePlane.end())
	{
		//代表爆炸的效果完成
		if ((*ite)->m_nShowID == 0)
		{
			delete(*ite);
			ite = m_lstBlastFoePlane.erase(ite);
		}
		else
		{
			(*ite)->m_nShowID--;
			++ite;
		}
	}
}