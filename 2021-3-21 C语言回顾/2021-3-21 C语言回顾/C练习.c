#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

//void print_c();    //����������
//char *getWord(char c);
int square(int);

//void print_c()     //�����Ķ���
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

	//�ַ�������
	//printf("%s\n", str);
	//printf("%d\n", sizeof(str));
	//printf("%u\n", strlen(str));
	//strcpy(str2,str1);
	//printf("%s\n", str2);

	//�ַ�������
	//strncpy(str2, str1, 3);
	//str2[3] = '\0';
	//printf("%s\n", str2);


	//�ַ���ƴ��
	//strcat(str1, str2);
	//printf("%s\n", str1);

	//�ַ����Ƚ�
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
	//	printf("���\n");
	//}

	//��ά����
	//��Ҫע���±��ȡֵ��Χ���Է�ֹ�����Խ�����
	/*int score[6][6];
	score[0][0] = 1;*/

	//int a[3][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
	////	int a[3][4] = { {1,2,3,4},{5,6,7,8},{9,10,11,12} };  a[][4]  3����ʡ��
	//int i, j;

	//for (i = 0; i < 3; i++)
	//{
	//	for (j = 0; j < 4; j++)
	//	{
	//		printf("%d\t", a[i][j]);
	//	}
	//	printf("\n");
	//}

	//ָ�� 
	//char a = 'F';
	//int b = 10;
	//char *pa=&a;  //����һ��ָ���ַ��͵�ָ�����
	//int *pb=&b;  //����һ��ָ�����͵�ָ�����
	//printf("%c %d\n", *pa, *pb);

	//ָ�������
	//int a;
	//int* p = &a;
	//printf("������һ������:\n");
	//scanf("%d", &a);
	//printf("a = %d\n", a);
	//printf("����������һ������:\n");
	//scanf("%d", p);
	//printf("a = %d\n", a);

	//int str[123];
	//scanf("%s", str);
	//printf("%s\n", str);

	//ָ�������ָ��
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

	//ָ������������������ֻ��һ����ַ����ָ����һ����ֵ

	//ָ������
	//���ۣ�ָ��������һ�����飬ÿ������Ԫ�ش��һ��ָ�����

	//����ָ��
	//����ָ����һ��ָ�룬��ָ�����һ������
	//int temp[5] = { 1,2,3,4,5 };
	//int(*p)[5] = &temp;
	//int i;
	//for (i = 0; i < 5; i++)
	//{
	//	printf("%d\n",*(*p+i));
	//}
	//��ά����
	//int arr[4][5] = { 0 };
	//printf("arr:%p", arr);
	//printf("arr+1:%p", arr + 1);

	//����ָ��Ͷ�ά����
	//int arr[2][3] = { {1,2,3},{4,5,6} };
	//int (*p)[3] = &arr;
	//printf("**(p+1):%d\n", **(p + 1));
	//printf("p[1][0]:%d\n", p[1][0]);

	//voidָ��
	// int num = 1024;
	//int *pi = &num;
	//char *ps = "FishC";
	//void *pv;

	//pv = pi;
	//printf("pi:%p,pv:%p\n", pi, pv);
	//pv = ps;
	//printf("pi:%p,pv:%p\n", pi, pv);

	//BULLָ��
	//#define NULL ((void*)0)
	//int *p1;       //Ұָ��
	//int *p2 = NULL;
	//printf("%p\n", p1);
	//printf("%p\n", p2);

	//ָ��ָ���ָ��
	//int num = 520;
	//int *p = &num;
	//int **pp = &p;
	//printf("%d\n", num);
	//printf("%d\n", *p);
	//printf("%d\n", **pp);

	//const���α���
	//ָ������ָ��
	//�ܽ᣺
	//ָ������޸�Ϊָ��ͬ�ĳ���
	//ָ������޸�Ϊָ��ͬ�ı���
	//����ͨ����Ӧ������ȡָ��ָ�������
	//������ͨ���������޸�ָ��ָ�������

	//����ָ��
	// ָ��ǳ����ĳ���ָ��
	//ָ���������Ա��޸�
	//ָ��ָ���ֵ���Ա��޸� 

	//ָ�����ĳ���ָ��
	//ָ���������Ա��޸� 
	//ָ��ָ���ֵҲ���Ա��޸�

	//����
	//print_c();   //�����ĵ��� 

	//��ֵ�봫ַ
	//ָ�뺯����ֻ��ָ�������Ϊ�����ķ���ֵ������ָ�뺯��
	//ע��:+��Ҫ���ؾֲ�������ָ�� 
	//char input;
	//printf("������һ����ĸ: ");
	//scanf("%c", &input);
	//printf("%s\n", getWord(input));

	//����ָ��
	//int num;
	//int (*p)(int);
	//scanf("%d", &num);
	//printf("������һ������:");
	//p = &square;
	//printf("%d\n", (*p)(num));   //(*p)  ����ָ��

	//int calc(int (*p)(int,int),int num1,int num2);   //����ָ����Ϊ����
	//int (*select(char))(int,int);     //����ָ����Ϊ����ֵ









	return 0;
}