#include "Anna.h"
#include<iostream>
using namespace std;



CAnna::CAnna()
{
}


CAnna::~CAnna()
{
}

void CAnna::PushCage(CHouse& house, int nCount)
{
	for (int i = 0; i < nCount; i++)
	{
		CCage *pCage = new CCage;
		if (house.lst.empty() == true)
			pCage->nID = 1;
		else
			pCage->nID = house.lst.back()->nID + 1;
		house.lst.push_back(pCage);
	}
}
bool CAnna::PushAnimal(CHouse& house, int nId, CAnimal* pAnimal)
{
	list<CCage*>::iterator ite = house.lst.begin();
	while (ite != house.lst.end())
	{
		if ((*ite)->nID == nId)
		{
			if ((*ite)->m_pAniaml == 0)
			{
				(*ite)->m_pAniaml = pAnimal;
				return true;
			}
			else
			{
				return false;
			}
		}
		++ite;
	}
	return false;
}
void CAnna::LookLook(CHouse& house)
{
	list<CCage*>::iterator ite = house.lst.begin();
	while (ite != house.lst.end())
	{
		cout << (*ite)->nID << " ";
		if ((*ite)->m_pAniaml == 0)
			cout << "-----------NULL---------" << endl;
		else
			(*ite)->m_pAniaml->Show();
		++ite;
	}
}
void CAnna::PlayAnimal(CHouse& house, int nID)
{
	list<CCage*>::iterator ite = house.lst.begin();
	while (ite != house.lst.end())
	{
		if ((*ite)->nID == nID)
		{
			if ((*ite)->m_pAniaml == 0)
			{
				cout << "没有动物" << endl;
			}
			else
			{
				cout << "用个毛线" << endl;
				(*ite)->m_pAniaml->Play();
			}
			return;
		}
		++ite;
	}
	cout << "没有找到这个笼子" << endl;
}