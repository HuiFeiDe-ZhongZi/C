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
//	"������ѧC����ɡ�",
//	"С����",
//	48.8,
//	{2020,3,30},
//	"�廪��ѧ������"
//};
//
//int main()
//{
//
//	printf("%s\n",book.title);
//	printf("%d-%d-%d\n", book.title);
//	//�ṹ��ָ��   �ṹ��ָ����ʽṹ���Ա�����ַ����� 1.��*p��.��Ա��  2.�ṹ��ָ��->��Ա��
//	struct Book *p;
//	p = &book;
//	
//
//	return 0;
//}