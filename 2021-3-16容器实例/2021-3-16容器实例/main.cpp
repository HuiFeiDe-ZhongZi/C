//ʵ����Anne�ĳ���С����һЩ�����ӣ�ÿ�����ӿ��ԷŲ�ͬ�Ķ����ֻ�ܷ�1ֻ��0ֻ��������èCat����Dog����Snake��
//Ҫ��
//1��ʵ��һ���򵥵Ĺ���ϵͳ�������ӡ�ɾ�������еĳ���, �鿴ÿ��������װ����ʲô���
//��һЩ���ӣ����Ŷ����ȥ��
//  ����ͼ����д����

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
	
	p1->Init("��1", "����1", "��1");
	p2->Init("��2", "����2", "��2");
	p3->Init("��3", "����3", "��3");

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