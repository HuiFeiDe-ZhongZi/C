//#include<iostream>
//#include<list>
//#include<algorithm>   //�㷨
//using namespace std;
//
//void Show(int nVal)
//{
//	cout << nVal << " ";
//}
//int main()
//{
//	list<int> lst;    //����һ������
//
//	lst.push_back(1);
//	lst.push_back(2);
//	lst.push_back(3);
//	lst.push_back(4);
//	
//
//	//list<int>::iterator ite = lst.begin();  //����һ��������
//	//while (ite != lst.end())
//	//{
//	//	cout << *ite << endl;
//	//	++ite;
//	//}
//	//---------------------------------------------------
//	::for_each(lst.begin(), lst.end(), &Show);  //��������
//	cout << endl;
//
//	//ͷβɾ��
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
//		cout << "��Ϊ��" << endl;
//	}
//
//	system("pause");
//	return 0;
//}