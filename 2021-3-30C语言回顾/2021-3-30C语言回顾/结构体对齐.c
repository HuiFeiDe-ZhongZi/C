//#include <stdio.h>
//
//struct AA
//{
//	int a;
//	char b;
//	short c;
//};
//
//struct BB
//{
//	char a;
//	int b;
//	short c;
//};
//
////以最大基本类型对齐
//
//struct DD
//{
//	char a;
//	short *b;
//	double c;
//	float d;
//	short e;
//	char f;
//};
//
//struct EE
//{
//	char a;
//	char b;
//	char c;
//};
//
//struct FF
//{
//	int a;
//	char b[7];
//};
//
//int main()
//{
//
//	/*printf("%d\n",sizeof(struct AA));
//	printf("%d\n",sizeof(struct BB));*/
//
//	printf("%d\n",sizeof(struct DD));
//	printf("%d\n",sizeof(struct EE));
//	printf("%d\n",sizeof(struct FF));
//
//	return 0;
//}