//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<stdlib.h>
////void honoi(int n, char x, char y, char z);   //��������
//
////��ŵ��С��Ϸԭ��
////void honoi(int n, char x, char y, char z)    //��������
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
////		//�������ҵ����ڻ�׼���Ԫ��
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
////�ṹ��
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
//	//printf("�����������");
//	//scanf("%d", &n);
//	//honoi(n, 'X', 'Y', 'Z');
//
//	//��������
//	//int arr[] = { 73,108,111,101,118,78,105,115,104,67,46,99,111,109 };
//	//int i, lenth;
//	//lenth = sizeof(arr) / sizeof(arr[0]);
//	//quick_sort(arr,0,lenth-1);
//
//	//malloc  ����ռ�
//	//����ԭ�� void *malloc(size_t size)
//	//malloc������ϵͳ�������size���ֽڵ��ڴ�ռ䣬������һ��ָ�����ռ��ָ��
//	//int *ptr = (int*)malloc(sizeof(int));
//	//if (ptr == NULL)
//	//{
//	//	printf("�����ڴ�ʧ���ˣ�\n");
//	//	exit(1);
//	//}
//	//free(ptr);
//
//	//free  �ͷſռ�
//	//����ԭ��
//	//void free��void *ptr);
//
//	//�ڴ�й©
//	// ����Ķ�̬�ڴ�û�м�ʱ�ͷ�
//	//��ʧ�ڴ��ĵ�ַ
//
//	//һ��������text'data'bss�������
//
//	//�ѣ����ڴ�Ž��������б���̬������ڴ�Σ����Ĵ�С�����̶����ɶ�̬��չ����С��
//	//ջ������ִ�е��ڴ�����ͨ���Ͷѹ���ͬһƬ����
//	//�Ѻ�ջ�������뷽ʽ��1.���ɳ���Ա�ֶ����� 2.ջ��ϵͳ�Զ�����   �ͷŷ�ʽ��1.���ɳ���Ա�ֶ��ͷ� 2.ջ��ϵͳ�Զ��ͷ�
//
//	//��������
//	//#��##������Ԥ���������
//	//�ڴ������ĺ궨���У�#���������Ӧ�ø�һ��������Ԥ����������������ת��Ϊһ���ַ���
//	//##���������Ϊ�Ǻ�������������������ǿ���ʹ��##�����������������
//
//	//�ṹ��
//	struct Book ps = { "feiwu","diudiudiu",50.8,201602011,"�廪��ѧ" };
//	printf("%.2f\n", ps.pricer);
//
//
//
//	return 0;
//}