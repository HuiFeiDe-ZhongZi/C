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
//	//lst.remove(3);   //ɾ��������Ϊ3��Ԫ��
//	//lst.unique();      //ɾ������������ͬ��Ԫ��
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
//	//lst1.splice(itePos, lst2);    //��lst1�������� itePosλ�ò��� lst2�������
//	//lst1.splice(itePos, lst2, iteFirst);      //��lst1�������� itePosλ�ã�����lst2��������iteFirst��ǵ�һ��Ԫ��
//	lst1.splice(itePos, lst2, iteFirst, iteLast);//��lst1�������� itePosλ�ã�����lst2��������iteFirst��iteLast����һ��Ԫ��
//	
//	::for_each(lst1.begin(), lst1.end(), &show);
//	cout << endl;
//	::for_each(lst2.begin(), lst2.end(), &show);
//	cout << endl;
//
//	lst1.sort();          //��������
//	lst2.sort();
//
//	lst1.merge(lst2);      //�������������ϲ� ��������lst�����ݱ����ȶ�������������
//
//	lst1.reverse();      //��ת
//	::for_each(lst1.begin(), lst1.end(), &show);
//	cout << endl;
//	::for_each(lst2.begin(), lst2.end(), &show);
//	cout << endl;
//	system("pause");
//	return 0;
//}