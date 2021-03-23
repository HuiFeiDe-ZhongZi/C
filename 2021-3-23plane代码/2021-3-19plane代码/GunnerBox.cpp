#include "GunnerBox.h"



CGunnerBox::CGunnerBox()
{
}


CGunnerBox::~CGunnerBox()
{
	list<CGunner*>::iterator ite = m_lstGunner.begin();
	while (ite != m_lstGunner.end())
	{
		delete (*ite);   //删除炮弹对象
		ite = m_lstGunner.erase(ite);  //删除节点
	}
}

void CGunnerBox::AllGunnerShow(HDC hdc)
{
	list<CGunner*>::iterator ite = m_lstGunner.begin();
	while (ite != m_lstGunner.end())
	{
		(*ite)->ShowGunner(hdc);
		++ite;
	}
}
void CGunnerBox::AllGunnerMove()
{
	list<CGunner*>::iterator ite = m_lstGunner.begin();
	while (ite != m_lstGunner.end())
	{
		//超出边界的炮弹  删除
		if ((*ite)->y < 0)
		{
			delete (*ite);   //删除炮弹对象
			ite = m_lstGunner.erase(ite);  //删除节点
		}
		else
		{
			(*ite)->MoveGunner();
			++ite;
		}
	}
}
