#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

//void print_c();    //函数的声明
//char *getWord(char c);
int square(int);

//void print_c()     //函数的定义
//{
//	printf(" ###### \n");
//	printf("##    ##\n");
//	printf("##      \n");
//	printf("##      \n");
//	printf("##      \n");
//	printf("##    ##\n");
//	printf(" ###### \n");
//}

//char *getWord(char c)
//{
//	switch (c)
//	{
//	case 'A':return "Apple";
//	case 'B':return "Banana";
//	case 'C':return "Cat";
//	case 'D':return "Dog";
//	case 'E':return "Egg";
//	default: return "None";
//	}
//}

int square(int num)
{
	return num*num;
}

int main()
{
	//int a[6] = { 1,23,54,4,6,7 };
	//int i,b;
	//for (i = 0; i < 6; i++)
	//{
	//	b=a[i];
	//	printf("%d\n", b); 
	//}
	// 
	//char str1[15] = "ssssss";
	//char str2[] = "abc";
	//char str3[20];

	//字符串长度
	//printf("%s\n", str);
	//printf("%d\n", sizeof(str));
	//printf("%u\n", strlen(str));
	//strcpy(str2,str1);
	//printf("%s\n", str2);

	//字符串拷贝
	//strncpy(str2, str1, 3);
	//str2[3] = '\0';
	//printf("%s\n", str2);


	//字符串拼接
	//strcat(str1, str2);
	//printf("%s\n", str1);

	//字符串比较
	//if (strcmp(str1, str2)>0)
	//{
	//	printf("str1\n");
	//}
	//else if(strcmp(str1, str2)<0)
	//{
	//	printf("str2\n");
	//}
	//else
	//{
	//	printf("相等\n");
	//}

	//二维数组
	//需要注意下标得取值范围，以防止数组得越界访问
	/*int score[6][6];
	score[0][0] = 1;*/

	//int a[3][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
	////	int a[3][4] = { {1,2,3,4},{5,6,7,8},{9,10,11,12} };  a[][4]  3可以省略
	//int i, j;

	//for (i = 0; i < 3; i++)
	//{
	//	for (j = 0; j < 4; j++)
	//	{
	//		printf("%d\t", a[i][j]);
	//	}
	//	printf("\n");
	//}

	//指针 
	//char a = 'F';
	//int b = 10;
	//char *pa=&a;  //定义一个指向字符型的指针变量
	//int *pb=&b;  //定义一个指向整型的指针变量
	//printf("%c %d\n", *pa, *pb);

	//指针和数组
	//int a;
	//int* p = &a;
	//printf("请输入一个整数:\n");
	//scanf("%d", &a);
	//printf("a = %d\n", a);
	//printf("请重新输入一个整数:\n");
	//scanf("%d", p);
	//printf("a = %d\n", a);

	//int str[123];
	//scanf("%s", str);
	//printf("%s\n", str);

	//指向数组的指针
	//char a[] = "dainifeif";
	//char *p = a;
	//printf("%c %c ", *p, *(p + 2));

	//char *str = "I Love you!!!";
	//int i, lenth;
	//lenth = strlen(str);
	//for (i = 0; i < lenth; i++)
	//{
	//	printf("%c", str[i]);
	//}
	//printf("\n");

	//指针和数组的区别：数组名只是一个地址，而指针是一个左值

	//指针数组
	//结论：指针数组是一个数组，每个数组元素存放一个指针变量

	//数组指针
	//数组指针是一个指针，他指向的是一个数组
	//int temp[5] = { 1,2,3,4,5 };
	//int(*p)[5] = &temp;
	//int i;
	//for (i = 0; i < 5; i++)
	//{
	//	printf("%d\n",*(*p+i));
	//}
	//二维数组
	//int arr[4][5] = { 0 };
	//printf("arr:%p", arr);
	//printf("arr+1:%p", arr + 1);

	//数组指针和二维数组
	//int arr[2][3] = { {1,2,3},{4,5,6} };
	//int (*p)[3] = &arr;
	//printf("**(p+1):%d\n", **(p + 1));
	//printf("p[1][0]:%d\n", p[1][0]);

	//void指针
	// int num = 1024;
	//int *pi = &num;
	//char *ps = "FishC";
	//void *pv;

	//pv = pi;
	//printf("pi:%p,pv:%p\n", pi, pv);
	//pv = ps;
	//printf("pi:%p,pv:%p\n", pi, pv);

	//BULL指针
	//#define NULL ((void*)0)
	//int *p1;       //野指针
	//int *p2 = NULL;
	//printf("%p\n", p1);
	//printf("%p\n", p2);

	//指向指针的指针
	//int num = 520;
	//int *p = &num;
	//int **pp = &p;
	//printf("%d\n", num);
	//printf("%d\n", *p);
	//printf("%d\n", **pp);

	//const修饰变量
	//指向常量的指针
	//总结：
	//指针可以修改为指向不同的常量
	//指针可以修改为指向不同的变量
	//可以通过解应用来读取指针指向的数据
	//不可以通过解引用修改指针指向的数据

	//常量指针
	// 指向非常量的常量指针
	//指针自身不可以被修改
	//指针指向的值可以被修改 

	//指向常量的常量指针
	//指针自身不可以被修改 
	//指针指向的值也可以被修改

	//函数
	//print_c();   //函数的调用 

	//传值与传址
	//指针函数：只用指针变量作为函数的返回值，就是指针函数
	//注意:+不要返回局部变量的指针 
	//char input;
	//printf("请输入一个字母: ");
	//scanf("%c", &input);
	//printf("%s\n", getWord(input));

	//函数指针
	//int num;
	//int (*p)(int);
	//scanf("%d", &num);
	//printf("请输入一个整数:");
	//p = &square;
	//printf("%d\n", (*p)(num));   //(*p)  函数指针

	//int calc(int (*p)(int,int),int num1,int num2);   //函数指针作为参数
	//int (*select(char))(int,int);     //函数指针作为返回值









	return 0;
}