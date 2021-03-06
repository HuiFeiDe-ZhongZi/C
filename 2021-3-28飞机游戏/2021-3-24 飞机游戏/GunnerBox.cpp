#include "GunnerBox.h"



CGunnerBox::CGunnerBox()
{
}


CGunnerBox::~CGunnerBox()
{
	list<CGunner*>::iterator ite = m_lstGunner.begin();
	while (ite != m_lstGunner.end())
	{
		delete(*ite);   //ɾ???ڵ?????
		ite = m_lstGunner.erase(ite); //ɾ???ڵ?
	}
}


void CGunnerBox::AllGunnerShow(HDC hdc)
{
	list<CGunner*>::iterator ite = m_lstGunner.begin();
	while (ite != m_lstGunner.end())
	{
		(*ite)->ShowGunner(hdc);    //??ʾ?ڵ?
		++ite;
	}
}
void CGunnerBox::AllGunnerMove()
{
	list<CGunner*>::iterator ite = m_lstGunner.begin();
	while (ite != m_lstGunner.end())
	{
		if ((*ite)->y < 0)
		{
			delete(*ite);
			ite = m_lstGunner.erase(ite);
		}
		else
		{
			(*ite)->MoveGunner();
			++ite;
		}
	}
}