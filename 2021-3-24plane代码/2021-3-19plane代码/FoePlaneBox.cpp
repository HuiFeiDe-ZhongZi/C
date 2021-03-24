#include "FoePlaneBox.h"
#include"BigFoePlane.h"
#include"MidFoePlane.h"
#include"SmallFoePlane.h"



CFoePlaneBox::CFoePlaneBox()
{
}


CFoePlaneBox::~CFoePlaneBox()
{
	list<CFoePlane*>::iterator ite = m_lstFoePlane.begin();
	while (ite != m_lstFoePlane.end())
	{
		delete (*ite);
		++ite;
	}
}

void CFoePlaneBox::CreatFoePlane(HINSTANCE hIns)
{
	//����һ�����˷ɻ��Ķ���
	CFoePlane* pFoePlane = 0;
	int index = rand() % 12;
	if (index >= 0 && index <= 1)
		pFoePlane = new CBigFoePlane;
	else if(index >= 2 && index <= 5)
		pFoePlane = new CMidFoePlane;
	else
		pFoePlane = new CSmallFoePlane;
	//��ʼ�����˷ɻ�
	pFoePlane->InitFoePlane(hIns);
	//��ӵ�������
	m_lstFoePlane.push_back(pFoePlane);
}
void CFoePlaneBox::AllFoePlaneShow(HDC hdc)
{
	list<CFoePlane*>::iterator ite = m_lstFoePlane.begin();
	while (ite != m_lstFoePlane.end())
	{
		(*ite)->ShowFoePlane(hdc);   //��ʾ���˷ɻ�
		++ite;
	}
}
void CFoePlaneBox::AllFoePlaneMove()
{
	list<CFoePlane*>::iterator ite = m_lstFoePlane.begin();
	while (ite != m_lstFoePlane.end())
	{
		if ((*ite)->y > 550)
		{
			delete (*ite);
			ite = m_lstFoePlane.erase(ite);
		}
		else
		{
			(*ite)->FoePlaneMove();   //���˷ɻ��ƶ�
			++ite;
		}
	}
}