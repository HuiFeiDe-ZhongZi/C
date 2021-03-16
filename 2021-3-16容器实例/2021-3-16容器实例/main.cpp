//实例：Anne的宠物小屋有一些个笼子，每个笼子可以放不同的动物，但只能放1只或0只，包括：猫Cat、狗Dog、蛇Snake。
//要求：
//1）实现一个简单的管理系统，可增加、删除笼子中的宠物, 查看每个笼子里装的是什么动物，
//买一些笼子，带着动物出去玩
//  画类图，和写代码

#include<iostream>
#include "Animal.h"
#include "Cat.h"
#include "Dog.h"
#include "Snake.h"
#include"House.h"
#include"Cage.h"
#include"Anna.h"
using namespace std;

int main()
{
	CAnimal *p1 = new CCat;
	CAnimal *p2 = new CDog;
	CAnimal *p3 = new CSnake;
	
	p1->Init("黑1", "旺财1", "公1");
	p2->Init("黑2", "旺财2", "公2");
	p3->Init("黑3", "旺财3", "公3");

	CHouse house;
	CAnna anne;
	anne.PushCage(house, 5);
	anne.LookLook(house);

	anne.PushAnimal(house, 1, p1);
	anne.PushAnimal(house, 3, p2);
	anne.PushAnimal(house, 5, p3);
	anne.LookLook(house);

	anne.PlayAnimal(house, 3);



	system("pause");
	return 0;
}