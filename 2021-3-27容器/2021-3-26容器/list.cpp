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
//	lst1.push_back(3);
//	lst1.push_back(1);
//	lst1.push_back(1);
//	lst1.push_back(2);
//	lst1.push_back(2);
//	lst1.push_back(3);
//	lst1.push_back(2);
//	lst1.push_back(5);
//	lst1.push_back(7);
//	lst1.push_back(3);
//
//
//	::for_each(lst1.begin(), lst1.end(), &show);
//	cout << endl;
//
//	//lst.remove(3);   //删除链表中为3的元素
//	//lst.unique();      //删除链表连续相同的元素
//	::for_each(lst1.begin(), lst1.end(), &show);
//	cout << endl;
//
//	list<int> lst2;
//	lst2.push_back(8);
//	lst2.push_back(7);
//	lst2.push_back(6);
//	lst2.push_back(5);
//	lst2.push_back(4);
//	lst2.push_back(3);
//	lst2.push_back(2);
//	lst2.push_back(1);
//	::for_each(lst2.begin(), lst2.end(), &show);
//	cout << endl;
//
//	//list<int>::iterator itePos = ::find(lst1.begin(), lst1.end(), 1);
//
//
//	list<int>::iterator itePos = ::find(lst1.begin(), lst1.end(), 1);
//	list<int>::iterator iteFirst = ::find(lst2.begin(), lst2.end(), 5);
//	list<int>::iterator iteLast= ::find(lst2.begin(), lst2.end(), 2);
//
//	//lst1.splice(itePos, lst2);    //在lst1这个链表的 itePos位置插入 lst2这个链表
//	//lst1.splice(itePos, lst2, iteFirst);      //在lst1这个链表的 itePos位置，插入lst2这个链表的iteFirst标记的一个元素
//	lst1.splice(itePos, lst2, iteFirst, iteLast);//在lst1这个链表的 itePos位置，插入lst2这个链表从iteFirst到iteLast的这一段元素
//	
//	::for_each(lst1.begin(), lst1.end(), &show);
//	cout << endl;
//	::for_each(lst2.begin(), lst2.end(), &show);
//	cout << endl;
//
//	lst1.sort();          //进行排序
//	lst2.sort();
//
//	lst1.merge(lst2);      //两个有序的链表合并 ，，两个lst的内容必须先都经过升序排序
//
//	lst1.reverse();      //翻转
//	::for_each(lst1.begin(), lst1.end(), &show);
//	cout << endl;
//	::for_each(lst2.begin(), lst2.end(), &show);
//	cout << endl;
//	system("pause");
//	return 0;
//}