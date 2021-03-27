//#include<iostream>
//#include<algorithm>
//#include<list>
//#include<vector>
//#include<time.h>
//using namespace std;
//
//
//int main()
//{
//	//vector<list<int>>  vec(7);    //创建7个链表
//
//	//for (int i = 0; i < 7; i++)
//	//{
//	//	for (int j = 0; j <= i; j++)
//	//	{
//	//		vec[i].push_back(j + 1);
//	//	}
//	//}
//
//	//for (int i = 0; i < 7; i++)                       //创建一个迭代器，分别输出7个链表的内容
//	//{
//	//	list<int>::iterator  ite = vec[i].begin();
//	//	while (ite != vec[i].end())
//	//	{
//	//		cout << *ite << " ";
//	//		++ite;
//	//	}
//	//	cout << endl;
//	//}
////------------------------------------------------------------------------------------------------
//	list<vector<int>>  lst;                     //创建一个链表  每个链表成员对应一个数组
//	list<vector<int>>::iterator ite = lst.begin();
//	while (ite!=lst.end())
//	{
//		vector<int>::iterator vec = (*ite).begin();
//		while (vec != (*ite).end())
//		{
//			cout << *vec << "  ";
//			++vec;
//		}
//		cout << endl;
//		++ite;
//	}
//
//
//	system("pause");
//	return 0;
//}