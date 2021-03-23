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
	//创建一个敌人飞机的对象
	CFoePlane* pFoePlane = 0;
	int index = rand() % 12;
	if (index >= 0 && index <= 1)
		pFoePlane = new CBigFoePlane;
	else if(index >= 2 && index <= 5)
		pFoePlane = new CMidFoePlane;
	else
		pFoePlane = new CSmallFoePlane;
	//初始化敌人飞机
	pFoePlane->InitFoePlane(hIns);
	//添加到链表里
	m_lstFoePlane.push_back(pFoePlane);
}
void CFoePlaneBox::AllFoePlaneShow(HDC hdc)
{
	list<CFoePlane*>::iterator ite = m_lstFoePlane.begin();
	while (ite != m_lstFoePlane.end())
	{
		(*ite)->ShowFoePlane(hdc);   //显示敌人飞机
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
			(*ite)->FoePlaneMove();   //敌人飞机移动
			++ite;
		}
	}
}