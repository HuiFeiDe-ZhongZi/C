//#include<stdio.h>
//
////数组 相同类型元素的集合
//int main()
//{
//	int arr[5] = { 1,2,3,4,5 };   //完全初始化
//	int arr1[5] = { 1,2 };   //不完全初始化 没有初始化的元素默认默认初始化为0
//	int arr2[] = { 1,2,3 };
//
//	//下标访问  数组名+[第几个元素-1]
//	//arr[2] = 30;
//	//int i;
//	//for(i = 0;i < 5; i++)
//	//{
//	//	printf("%d\n", arr[i]);
//	//}
//
//	//数组名一般情况下代表首元素的地址 当数组名与&和sizeof结合的时候代表整个数组
//	printf("%d\n", sizeof(arr));
//	//对整个数组的地址间接引用得到首元素的地址
//
//	//数组名是一个常量
//	//arr++;
//	return 0;
//}