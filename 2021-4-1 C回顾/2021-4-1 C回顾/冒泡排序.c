//#include<stdio.h>
//
//int main()
//{
//	int arr[6] = { 5,2,6,1,3,4 };
//	int i, j;
//	for (i = 0; i < 5; i++)
//	{
//		for (j = 0; j < 5-i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//
//	for (i = 0; i < 6; i++)
//	{
//		printf("%d\n", arr[i]);
//	}
//	return 0;
//}