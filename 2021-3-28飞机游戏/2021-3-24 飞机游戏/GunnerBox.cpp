#include "GunnerBox.h"



CGunnerBox::CGunnerBox()
{
}


CGunnerBox::~CGunnerBox()
{
	list<CGunner*>::iterator ite = m_lstGunner.begin();
	while (ite != m_lstGunner.end())
	{
		delete(*ite);   //删除炮弹对象
		ite = m_lstGunner.erase(ite); //删除节点
	}
}


void CGunnerBox::AllGunnerShow(HDC hdc)
{
	list<CGunner*>::iterator ite = m_lstGunner.begin();
	while (ite != m_lstGunner.end())
	{
		(*ite)->ShowGunner(hdc);    //显示炮弹
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