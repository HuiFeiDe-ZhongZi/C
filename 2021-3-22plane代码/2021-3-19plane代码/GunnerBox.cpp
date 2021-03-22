#include "GunnerBox.h"



CGunnerBox::CGunnerBox()
{
}


CGunnerBox::~CGunnerBox()
{
	list<CGunner*>::iterator ite = m_lstGunner.begin();
	while (ite != m_lstGunner.end())
	{
		delete (*ite);   //ɾ���ڵ�����
		ite = m_lstGunner.erase(ite);  //ɾ���ڵ�
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
		//�����߽���ڵ�  ɾ��
		if ((*ite)->y < 0)
		{
			delete (*ite);   //ɾ���ڵ�����
			ite = m_lstGunner.erase(ite);  //ɾ���ڵ�
		}
		else
		{
			(*ite)->MoveGunner();
			++ite;
		}
	}
}
