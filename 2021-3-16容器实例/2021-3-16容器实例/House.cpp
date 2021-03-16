#include "House.h"



CHouse::CHouse()
{
}


CHouse::~CHouse()
{
	//删除链表中所有笼子的对象
	list<CCage*>::iterator ite = lst.begin();
	while (ite != lst.end())
	{
		delete (*ite);
		++ite;
	}

}
