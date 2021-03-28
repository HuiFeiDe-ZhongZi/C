#include "FoePlaneBox.h"
#include"MidFoePlane.h"
#include"BigFoePlane.h"
#include"SmallFoePlane.h"



CFoePlaneBox::CFoePlaneBox()
{
}


CFoePlaneBox::~CFoePlaneBox()
{
	list<CFoePlane*>::iterator ite = m_lstFoePlane.begin();
	while (ite != m_lstFoePlane.end())
	{
		delete(*ite);
		ite = m_lstFoePlane.erase(ite); //删除节点
	}
}


void CFoePlaneBox::CreatFoePlane(HINSTANCE hIns)
{
	//1.创建敌人飞机对象
	CFoePlane* pFoePlane = 0;
	int index = rand() % 12;
	if (index >= 0 && index <= 1)
		pFoePlane = new CBigFoePlane;
	else if (index >= 2 && index <= 5)
		pFoePlane = new CMidFoePlane;
	else
		pFoePlane = new CSmallFoePlane;
	//2.初始化敌人飞机
	pFoePlane->InitFoePlane(hIns);
	//3.加入链表
	m_lstFoePlane.push_back(pFoePlane);
}
void CFoePlaneBox::AllFoePlaneShow(HDC hdc)
{
	list<CFoePlane*>::iterator ite = m_lstFoePlane.begin();
	while (ite != m_lstFoePlane.end())
	{
		(*ite)->ShowFoePlane(hdc);
		++ite;
	}
}
void CFoePlaneBox::AllFoePlaneMove()
{
	list<CFoePlane*>::iterator ite = m_lstFoePlane.begin();
	while (ite != m_lstFoePlane.end())
	{
		if ((*ite)->y > 500)
		{
			delete(*ite);
			ite = m_lstFoePlane.erase(ite); //删除节点
		}
		else
		{
			(*ite)->FoePlaneMove();
			++ite;
		}

	}
}