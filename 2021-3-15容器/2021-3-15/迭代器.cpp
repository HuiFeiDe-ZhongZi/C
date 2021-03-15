//#include<iostream>
//#include<list>
//#include<algorithm>   //算法
//using namespace std;
//
//void Show(int nVal)
//{
//	cout << nVal << " ";
//}
//int main()
//{
//	list<int> lst;    //定义一个链表
//
//	lst.push_back(1);
//	lst.push_back(2);
//	lst.push_back(3);
//	lst.push_back(4);
//	
//
//	//list<int>::iterator ite = lst.begin();  //定义一个迭代器
//	//while (ite != lst.end())
//	//{
//	//	cout << *ite << endl;
//	//	++ite;
//	//}
//	//---------------------------------------------------
//	::for_each(lst.begin(), lst.end(), &Show);  //遍历链表
//	cout << endl;
//
//	//头尾删除
//	/*lst.pop_back();
//	lst.pop_front();
//	::for_each(lst.begin(), lst.end(), &Show);
//	cout << endl;*/
//
//	list<int>::iterator itepo = ::find(lst.begin(), lst.end(),2);
//	lst.insert(itepo,100);
//	::for_each(lst.begin(), lst.end(), &Show);
//	cout << endl;
//
//	list<int>::iterator itepi = ::find(lst.begin(), lst.end(), 2);
//	lst.erase(itepi);
//	::for_each(lst.begin(), lst.end(), &Show);
//	cout << endl;
//	//------------------------------------------------------------------
//	cout << *(lst.begin()) << endl;
//	cout << *(--lst.end()) << endl;
//
//	cout << lst.front() << endl;
//	cout << lst.back() << endl;
//
//	cout << lst.size() << endl;
//
//	lst.clear();
//
//	if (lst.empty() == false)
//	{
//		cout << "不为空" << endl;
//	}
//
//	system("pause");
//	return 0;
//}