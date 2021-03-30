//#include<stdio.h>
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
//}book = {
//	"《带你学C带你飞》",
//	"小废物",
//	48.8,
//	{2020,3,30},
//	"清华大学出版社"
//};
//
//int main()
//{
//
//	printf("%s\n",book.title);
//	printf("%d-%d-%d\n", book.title);
//	//结构体指针   结构体指针访问结构体成员有两种方法： 1.（*p）.成员名  2.结构体指针->成员名
//	struct Book *p;
//	p = &book;
//	
//
//	return 0;
//}