//#include<stdio.h>
//
//int	T1(int , int);
//int	T2(int, int);
//int T3(int*);
//
//
//int main()
//{
//	printf("%d\n",T1(1, 3));
//	printf("%d\n", T2(1, 10));
//	int arr[] = { 1,5,9,3,6,7,8,4,0,2};
//	
//	printf("%d\n", T3(&arr));
//
//	return 0;
//}
//
//int T1(int a, int b)
//{
//	if (a > b)
//	{
//		return a;
//	}
//	else
//	{
//		return b;
//	}
//}
//
//int	T2(int a, int b)
//{
//	int i;
//	int sum = 0;
//	for (i = a; i <= b; i++)
//	{
//		sum += i;
//	}
//	return sum;
//}
//
//int T3(int *p)
//{
//	int i;
//	int max = p[0];
//	int a;
//	for (i = 0; i < 10; i++)
//	{
//		if (max < p[i])
//		{
//			max = p[i];
//			a = i;
//		}
//	}
//	return a;
//}