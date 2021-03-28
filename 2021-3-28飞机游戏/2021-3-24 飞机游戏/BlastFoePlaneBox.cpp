#include "BlastFoePlaneBox.h"



CBlastFoePlaneBox::CBlastFoePlaneBox()
{
}


CBlastFoePlaneBox::~CBlastFoePlaneBox()
{
	list<CFoePlane*>::iterator ite = m_lstFoePlane.begin();
	while (ite != m_lstFoePlane.end())
	{
		delete(*ite);
		++ite;
	}
}


void CBlastFoePlaneBox::AllBlastFoePlaneShow(HDC hdc)
{
	list<CFoePlane*>::iterator ite = m_lstFoePlane.begin();
	while (ite != m_lstFoePlane.end())
	{
		delete(*ite);
		++ite;
	}
}
void CBlastFoePlaneBox::ChangeShouID()
{
	list<CFoePlane*>::iterator ite = m_lstFoePlane.begin();
	while (ite != m_lstFoePlane.end())
	{
		if ((*ite)->m_nShowID == 0)
		{
			delete(*ite);
		}
		else
		{
			(*ite)->m_nShowID--;
			++ite;
		}

	}
}