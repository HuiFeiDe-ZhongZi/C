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
//	//lst.remove(1);   //  ɾ�����е�1
//	lst.unique();     //  ɾ��������ͬ��
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
//	//  ��lst��������itePosλ�ò���lst2��������
//	//lst.splice(itePos,lst2);
//	//  ��lst��������itePosλ�ò���lst2��������iteFrist���Ԫ��
//	//lst.splice(itePos,lst2,iteFrist);
//	//  ��lst��������itePosλ�ò���lst2�������Ĵ�iteFrist��iteLast��һ��
//	//lst.splice(itePos,lst2,iteFrist,iteLast);
//
//	lst.sort();
//	lst2.sort();
//
//	lst.merge(lst2);  //  ���������������ϲ�
//
//	lst.reverse();    //  ��ת
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