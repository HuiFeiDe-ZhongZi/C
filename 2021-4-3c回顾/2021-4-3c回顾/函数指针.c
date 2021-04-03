//#include<stdio.h>
//
//typedef int (*aa)(int, int);
//void AA();
//int Add(int a, int b);
//int main()
//{
//	//函数调用的本质 函数地址+参数
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