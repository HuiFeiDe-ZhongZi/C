//#include<iostream>
//#include<list>
//#include<algorithm>  //算法头文件
//
//using namespace std;
//
//
//void Show(int nVal)
//{
//	cout << nVal << " ";
//}
//
//int main()
//{
//	list<int> lst;
//	lst.push_front(4);
//	lst.push_front(3);
//	lst.push_front(2);
//	lst.push_front(1);
//	lst.pop_back();
//
//	//list<int>::iterator ite = lst.begin();
//	//while (ite!=lst.end())
//	//{
//	//	cout << *ite << endl;
//	//	ite++;
//	//}
//	//------------------------------------------------------------
//	//遍历 从begin到end每个函数调用一次
//	//::for_each(lst.begin(), lst.end(), &Show);
//	//cout << endl;
//
//	//指定位置的插入和删除
//	list<int>::iterator itepos = ::find(lst.begin(), lst.end(), 2);
//	lst.insert(itepos, 200);
//	itepos = ::find(lst.begin(), lst.end(), 1);
//	lst.erase(itepos);
//	::for_each(lst.begin(), lst.end(), &Show);
//	cout << endl;
//	system("pause");
//	return 0;
//}