#include "House.h"



CHouse::CHouse()
{
}


CHouse::~CHouse()
{
	//ɾ���������������ӵĶ���
	list<CCage*>::iterator ite = lst.begin();
	while (ite != lst.end())
	{
		delete (*ite);
		++ite;
	}

}
