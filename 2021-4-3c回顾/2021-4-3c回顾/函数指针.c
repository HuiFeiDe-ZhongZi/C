//#include<stdio.h>
//
//typedef int (*aa)(int, int);
//void AA();
//int Add(int a, int b);
//int main()
//{
//	//�������õı��� ������ַ+����
//	//AA();
//	//(&AA)();
//	//void (*p)();
//	//p = &AA;
//	//p();
//	int (*p)(int, int);
//	p = &Add;
//	printf("%d\n",p(3, 5));
//
//	aa a= &Add;
//	printf("%d\n", a(3, 5));
//
//
//	return 0;
//}
//
//void AA()
//{
//	printf("AA\n");
//}
//
//int Add(int a, int b)
//{
//	return a + b;
//}