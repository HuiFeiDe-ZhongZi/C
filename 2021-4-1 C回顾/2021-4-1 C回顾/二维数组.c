//#include<stdio.h>
//
////相同类型元素的集合  数组套数组
//
//int main()
//{
//	int arr[3][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 };  //完全初始化
//	int arr1[3][4] = { {1,2,3,4},{5,6,7,8},{9,10,11,12} };
//	//遍历元素数组
//	int i, j;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d\t", arr[i][j]);
//		}
//		printf("\n");
//	}
//
//	int(*p1)[3][4] = &arr;
//	int (*p2)[4] = arr;  //首元素为长度为4的数组
//	int *p3 = *arr;
//
//	return 0;
//}