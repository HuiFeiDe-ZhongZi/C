//#include <iostream> 
//#include <list>
//#include <algorithm>
//using namespace std;
//void Show(int nVal)
//{
//	cout << nVal << " " ;
//}
//int main()
//{
//	list<int> lst;
//	lst.push_back(1);
//	lst.push_back(1);
//	lst.push_back(2);
//	lst.push_back(2);
//	lst.push_back(2);
//	lst.push_back(1);
//	lst.push_back(1);
//	lst.push_back(3);
//	lst.push_back(4);
//	lst.push_back(4);
//	lst.push_back(4);
//	lst.push_back(3);
//
//	::for_each(lst.begin(),lst.end(),&Show);
//	cout << endl;
//
//	//lst.remove(1);   //  删除所有的1
//	lst.unique();     //  删除连续相同的
//
//	::for_each(lst.begin(),lst.end(),&Show);
//	cout << endl;
//
//	//--------------------------------------------
//	list<int> lst2;
//	lst2.push_back(3);
//	lst2.push_back(6);
//	lst2.push_back(4);
//	lst2.push_back(1);
//	lst2.push_back(8);
//	lst2.push_back(7);
//	lst2.push_back(5);
//
//	list<int>::iterator itePos = ::find(lst.begin(),lst.end(),2);
//	list<int>::iterator iteFrist = ::find(lst2.begin(),lst2.end(),6);
//	list<int>::iterator iteLast = ::find(lst2.begin(),lst2.end(),7);
//	//  在lst这个链表的itePos位置插入lst2整个链表
//	//lst.splice(itePos,lst2);
//	//  在lst这个链表的itePos位置插入lst2这个链表的iteFrist这个元素
//	//lst.splice(itePos,lst2,iteFrist);
//	//  在lst这个链表的itePos位置插入lst2这个链表的从iteFrist到iteLast这一段
//	//lst.splice(itePos,lst2,iteFrist,iteLast);
//
//	lst.sort();
//	lst2.sort();
//
//	lst.merge(lst2);  //  将两个有序的链表合并
//
//	lst.reverse();    //  翻转
//
//	::for_each(lst.begin(),lst.end(),&Show);
//	cout << endl;
//	::for_each(lst2.begin(),lst2.end(),&Show);
//	cout << endl;
//
//
//	system("pause");
//	return 0;
//}