//#include<stdio.h>
//#include<stdlib.h>
//
////堆区  手动申请空间
//
//int main()
//{
//
//	int *p = (int*)malloc(4);
//	p[0] = 'a';
//	p[1] = 'b';
//	p[2] = 'c';
//	p[3] = 'd';
//	int i;
//	for(i = 0; i < 4; i++)
//	{
//		printf("%c\n", p[i]);
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}