#include<stdio.h>
int main()
{
	//��1��
	//printf("%15d\n", 0xABCDEF);//���

	//��2��
	//int ret=printf("hello world!");
	//printf("\n");
	//printf("%d", ret);

	//printf("%d", printf("%d", printf("%d", 43)));

	//��3��
	//int num = 0;
	//float c_score = 0.0;
	//float math_score = 0.0;
	//float eng_score = 0.0;
	//scanf_s("%d;%f,%f,%f", &num, &math_score, &math_score, &eng_score);
	//printf("The each subject score of NO.%d is %.2f,%.2f,%.2f.\n", num, c_score, math_score, eng_score);

	//��4��
	//int ch = 0;
	//while ((ch = getchar()) != EOF)//ctrl+z��������
	//{
	//	//�ж���ĸ
	//	if ((ch >= 'A'&&ch <= 'Z') || (ch >= 'a'&&ch <= 'z'))
	//	{
	//		printf("yes\n");
	//	}
	//	else
	//	{
	//		printf("no\n");
	//	}
	//	//�����/n
	//	getchar();
	//}

	//��5��
	//char n = 0;
	//scanf_s("%c", &n);
	//int i, j;
	//for (i = 0; i < 5; i++)
	//{
	//	for (j = 0; j < 5 - i-1; j++)
	//	{
	//		printf(" ");
	//	} 
	//	for (j = 0; j <= i; j++)
	//	{
	//		printf("%c ", n);
	//	}
	//	printf("\n");
	//}

	//��6��
	//char arr[] = { 73,32,99,97,110,32,100,111,32,105,116,33};
	//int i = sizeof(arr) / sizeof(arr[0]);
	//int j = 0;
	//for (j = 0; j < i; j++)
	//{
	//	printf("%c", arr[j]);
	//}

	//��7��  λ��ʵ��2��n�η�
	//int n = 0;
	//while (scanf_s("%d", &n)!=EOF)
	//{
	//	printf("%d\n",1 << n);
	//}

	return 0;
}