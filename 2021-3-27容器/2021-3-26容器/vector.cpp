//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;


// vector ��ʹ�þ����������ɾ��
//void show(int a)
//{
//	cout << a << "  ";
//}
//int main()
//{
//	vector<int> vec(10);
//	
//
//	::for_each(vec.begin(), vec.end(), &show);
//	cout << endl << "size:" << vec.size() << "capacity:" << vec.capacity() << endl;
//
//	vec.push_back(1);   //�¿ռ���ԭ���ռ��1.5��
//	vec.push_back(1);
//	vec.push_back(1);
//	vec.push_back(1);
//	vec.push_back(1);
//	vec.push_back(1);
//
//	::for_each(vec.begin(), vec.end(), &show);
//	cout << endl << "size:" << vec.size() << "capacity:" << vec.capacity() << endl;
//
//	vector<int>::iterator ite = ::find(vec.begin(), vec.end(), 1);
//	vec.insert(ite, 100);    //ָ����λ�ò�������
//	::for_each(vec.begin(), vec.end(), &show);
//	cout << endl << "size:" << vec.size() << "capacity:" << vec.capacity() << endl;
//
//	ite=::find(vec.begin(), vec.end(), 100);
//	vec.erase(ite);  //ָ����λ��ȥɾ��   
//	::for_each(vec.begin(), vec.end(), &show);
//	cout << endl << "size:" << vec.size() << "capacity:" << vec.capacity() << endl;
//
//	vec.clear();   //���
//	::for_each(vec.begin(), vec.end(), &show);
//	cout << endl << "size:" << vec.size() << "capacity:" << vec.capacity() << endl;
//
//	system("pause");
//	return 0;
//}