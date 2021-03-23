//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<stdlib.h>
////void honoi(int n, char x, char y, char z);   //函数声明
//
////汉诺克小游戏原理
////void honoi(int n, char x, char y, char z)    //函数定义
////{
////	if (n == 1)
////	{
////		printf("%c->%c\n", x, z);
////	}
////	else
////	{
////		honoi(n - 1, x, z, y);
////		printf("%c->%c\n", x, z);
////		honoi(n - 1, y, x, z);
////	}
////}
//
////void quick_sort(int arr[],int left,int right)
////{
////	int  i = left;
////	int  j = right;
////	int temp;
////	int pivot;
////	while (i <= j)
////	{
////
////		//从左到右找到大于基准点的元素
////		while (arr[i]<pivot)
////		{
////			i++;
////		}
////		while (arr[i] > pivot)
////		{
////			j--;
////		}
////		if (i <= j)
////		{
////			temp = arr[i];
////			arr[i] = array[j];
////			arr[j] = temp;
////			i++; j++;
////		}
////	}
////}
//
////结构体
//struct Book
//{
//	char title[128];
//	char author[40];
//	float pricer;
//	unsigned int date;
//	char publisher[40];
//}book;
//
//
//int main()
//{
//	//int n;
//	//printf("请输入层数：");
//	//scanf("%d", &n);
//	//honoi(n, 'X', 'Y', 'Z');
//
//	//快速排序
//	//int arr[] = { 73,108,111,101,118,78,105,115,104,67,46,99,111,109 };
//	//int i, lenth;
//	//lenth = sizeof(arr) / sizeof(arr[0]);
//	//quick_sort(arr,0,lenth-1);
//
//	//malloc  申请空间
//	//函数原型 void *malloc(size_t size)
//	//malloc函数向系统申请分配size个字节的内存空间，并返回一个指向这块空间的指针
//	//int *ptr = (int*)malloc(sizeof(int));
//	//if (ptr == NULL)
//	//{
//	//	printf("分配内存失败了！\n");
//	//	exit(1);
//	//}
//	//free(ptr);
//
//	//free  释放空间
//	//函数原型
//	//void free（void *ptr);
//
//	//内存泄漏
//	// 申请的动态内存没有及时释放
//	//丢失内存块的地址
//
//	//一个程序由text'data'bss三段组成
//
//	//堆：用于存放进程运行中被动态分配的内存段，它的大小并不固定，可动态扩展或缩小。
//	//栈：函数执行的内存区域，通常和堆共享同一片区域。
//	//堆和栈区别：申请方式：1.堆由程序员手动申请 2.栈由系统自动分配   释放方式：1.堆由程序员手动释放 2.栈由系统自动释放
//
//	//内联函数
//	//#和##是两个预处理运算符
//	//在带参数的宏定义中，#运算符后面应该跟一个参数，预处理器会把这个参数转换为一个字符串
//	//##运算符被称为记号连接运算符，比如我们可以使用##运算符连接两个参数
//
//	//结构体
//	struct Book ps = { "feiwu","diudiudiu",50.8,201602011,"清华大学" };
//	printf("%.2f\n", ps.pricer);
//
//
//
//	return 0;
//}