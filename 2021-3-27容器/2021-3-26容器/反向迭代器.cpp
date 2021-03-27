//#include<iostream>
//#include<algorithm>
//#include<list>
//#include<time.h>
//using namespace std;
//
//void show(int a)
//{
//	cout << a << " ";
//}
//int main()
//{
//	list<int> lst1;
//
//	lst1.push_back(1);
//	lst1.push_back(3);
//	lst1.push_back(5);
//	lst1.push_back(7);
//	lst1.push_back(9);
//	lst1.push_back(2);
//	lst1.push_back(4);
//	lst1.push_back(6);
//	lst1.push_back(8);
//	lst1.push_back(0);
//
//	//定向迭代器算法
//	//list<int>::iterator ite = --(lst1.end());
//	//while (ite != lst1.begin())
//	//{
//	//	cout << *ite << "  ";
//	//	ite--;
//	//}
//	//cout << *ite << endl;
//
//	//翻转迭代器
//	//list<int>::reverse_iterator revite = lst1.rbegin();
//	//while (revite != lst1.rend())
//	//{
//	//	cout << *revite << " ";
//	//	++revite;
//	//}
//	//cout << endl;
//
//	list<int>::reverse_iterator revite = lst1.rbegin();
//	while (revite != lst1.rend())
//	{
//		if (*revite == 6)                         //如果想要删除6   正向迭代器与反向迭代器 差一个元素  有以下两种方法解决这个问题
//		{                                         //revite.base()  代表转成正向迭代器
//			lst1.erase(--(revite.base()));        //方法一：先翻转 后迭代器-1
//			//lst1.erase((++revite).base());        //方法二：先迭代+1  后翻转
//		}          
//		++revite;
//	}
//	
//	::for_each(lst1.begin(), lst1.end(), &show);
//
//
//
//	system("pause");
//	return 0;
//}