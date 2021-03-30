//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//
//
////struct Test
////{
////	int x;
////	int y;
////}t1,t2;
//
//struct Date
//{
//	int year;
//	int month;
//	int day;
//};
//
//struct Book
//{
//	char title[128];
//	char author[40];
//	float price;
//	struct Date date;
//	char publisher[40];
//};
//
//struct Book getInput(struct Book book)
//{
//	printf("请输入书名：");
//	scanf("%s",book.title);
//	return book;
//}
//
//void printBook(struct Book book)
//{
//	printf("书名:\n");
//	printf("%s\n", book.title);
//}
//int main()
//{
//    //--------------------------结构体赋值----------------------------------------------------
//	//t1.x=3;
//	//t1.y=4;
//	//t2 = t1;
//	//printf("%d  %d\n", t2.x, t2.y);
//	//--------------------------结构体赋值----------------------------------------------------
//
//	//-------------------------结构体传参--------------------------------------------------
//	
//	
//    struct Book b1;
//	printf("请录入第一本书的信息...\n");
//	b1 = getInput(b1);
//	putchar('\n');
//
//	printf("\n\n录入完毕，打印第一本书的信息....\n");
//
//	printBook(b1);
//
//
//	return 0;
//}