//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <time.h>
//using namespace std;
//
////  vector list 区别. 
////  不确定个数动态的添加删除使用链表
////  确定个数，读取数据。使用数组
//
//
//void Show(int nVal)
//{
//	cout << nVal << " ";
//}
//bool Rule(int a,int b)
//{
//	return a>b;
//}
//int main()
//{
//
//	srand((unsigned int)time(0));
//
//	vector<int> vec(10); 
//	for(int i=0;i<10;i++)
//	{
//		vec[i] = i+1;
//	}
//	::for_each(vec.begin(),vec.end(),&Show);
//	cout << endl;
//
//	::random_shuffle(vec.begin(),vec.end());   //  随机排列
//
//	::for_each(vec.begin(),vec.end(),&Show);
//	cout << endl;
//
//	::sort(vec.begin(),vec.end(),&Rule);   //  排序
//
//	::for_each(vec.begin(),vec.end(),&Show);
//	cout << endl;
//
//	::reverse(vec.begin(),vec.end());  //  翻转
//
//	::for_each(vec.begin(),vec.end(),&Show);
//	cout << endl;
//
//	cout << ::count(vec.begin(),vec.end(),1) << endl;  //  统计个数
//
//	system("pause");
//	return 0;
//}