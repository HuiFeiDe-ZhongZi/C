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
//	lst.push_back(2);
//	lst.push_back(3);
//	lst.push_back(4);
//	lst.push_back(5);
//	lst.push_back(6);
//	lst.push_back(7);
//
//	list<int>::reverse_iterator rev_ite = lst.rbegin();
//	while(rev_ite != lst.rend())
//	{
//		if( (*rev_ite) == 3)
//		{
//			lst.erase(--rev_ite.base());  //  rev_ite.base() 返回正向的迭代器
//			break;
//		}
//		rev_ite++;
//	}
//
//	::for_each(lst.begin(),lst.end(),&Show);
//
//	system("pause");
//	return 0;
//}