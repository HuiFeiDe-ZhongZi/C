//#include<iostream>
//#include<algorithm>
//#include<vector>
//#include<time.h>
//using namespace std;
//
//void show(int a)
//{
//	cout << a << " ";
//}
//
//bool rule(int a, int b)
//{
//	return a > b;
//}
//int main()
//{
//	srand((unsigned int)time(0));
//	vector<int> vec(10);
//	for (int i = 0; i < 10; i++)
//	{
//		vec[i] = i;
//	}
//	::for_each(vec.begin(), vec.end(), &show);
//	cout << endl;
//
//	::random_shuffle(vec.begin(), vec.end());   //随机排列
//	::for_each(vec.begin(), vec.end(), &show);
//	cout << endl;
//
//	::sort(vec.begin(), vec.end(),&rule);    //排序 默认是从小到大排列  可以自定义函数
//	::for_each(vec.begin(), vec.end(), &show);
//	cout << endl;
//
//	::reverse(vec.begin(), vec.end());     //翻转
//	::for_each(vec.begin(), vec.end(), &show);
//	cout << endl;
//
//	cout << ::count(vec.begin(), vec.end(), 1) << endl;   //统计数字1个数的
//
//	system("pause");
//	return 0;
//}
//
//
