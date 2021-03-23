#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//函数声明
//void recursion();
//int act(int num);
//void hanoi(int n, char x, char y, char z);


//函数定义
//void recursion()
//{
//	static int count = 10;
//	printf("Hi!\n");
//	if (--count)
//	{
//		recursion();
//	}
//}

//int act(int num)
//{
//	int count;
//	if (num < 0 || num == 1)
//	{
//		count = 1;
//	}
//	else
//	{
//		count=num*act(num - 1);
//	}
//	return count;
//}

void hanoi(int n, char x, char y, char z)
{
	if (n == 1)
	{
		printf("%c --->%c\n", x, z);
	}
	else
	{
		hanoi(n - 1, x, z, y);
		printf("%c --->%c\n", x, z);
		hanoi(n - 1, y, x, z);
	}
}

int main()
{
	//不同函数的变量无法相互访问   局部 全局

	//extern  关键字  若变量（a）在函数后面定义了  需要提前使用时调用extern a;

	//不要大量的使用全局变量：使用全局变量会是你的程序占用更多的内存，因为全局变量从被定义时候开始，知道程序退出时退出才被释放

	//作用域
	//1.代码块作用域  { }
	//2.文件作用域
	//3.原型作用域
	//4.函数作用域

	//函数的定义和声明
	//定义：当一个变量被定义的时候，编译器为变量申请内存空间并填充一些值。
	//声明：当一个变量被声明的时候，编译器就知道该变量被定义在其他地方

	//链接属性：c->编译 o(目标文件)->链接->可执行文件
	//                lib(库文件)->链接

	//生存期
	//c语言有两种生存期：静态存储期 自动存储期 
	//静态(static)存储期：具有文件作用域的变量属于静态存储期，函数也属于静态存储期。属于静态存储期的变量在程序执行期间将一直占据存储空间，直到程序关闭才释放
	//自动(auto)存储期： 具有代码块作用域的变量一般情况下属于自动存储期。属于自动存储期的变量在代码块结束时将自动释放存储空间

	//存储类型
	//c语言提供了5种不同的存储类型
	//auto:在代码块中声明的变量默认的存储类型就是自动变量，使用关键字auto来描述
	//register(寄存器变量)：当你将变量声明为寄存器变量，那么你就没办法通过取值运算符获得变量的地址
	//static：用来声明局部变量时，是的局部变量具有静态存储期，所以他的盛汛期与全局变量一样，知道程序结束时才被释放
	//extern：
	//typedef：

	//递归
	//注意：递归必须要有结束条件，否则程序将奔溃
	//recursion();
	//递归求阶乘
	//int i;
	//int count = 1;
	//for (i = 1; i <= 5; i++)
	//{
	//	count *= i;
	//}
	//printf("%d\n", count);

	//int count=act(5);
	//printf("%d\n", count);

	//汉诺塔
	//int n;
	//printf("请输入汉诺塔的层数：");
	//scanf("%d", &n);

	//hanoi(n, 'X', 'Y', 'Z');

	//自增运算
	//int i = 5, j = 5,k=5, p, q,f;
	//p = (i++) + (i++) + (i++);   //15
	//q = (++j) + (++j) + (++j);   //24
	//f = (++k) + (k++) + (k++);   //18
	//printf("%d  %d  %d  %d  %d  %d\n", p, q, i, j,f,k);


	return 0;
}