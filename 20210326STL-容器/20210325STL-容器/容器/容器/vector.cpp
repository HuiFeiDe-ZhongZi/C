//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//void Show(int nVal)
//{
//	cout << nVal << " ";
//}
//int main()
//{
//	//vector<int> vec;  // vec��һ���������
//	vector<int> vec(10); // ����һ��������10��Ԫ��
//	
//	//for(int i=0;i<10;i++)
//	//	cout << vec[i] << " ";
//
//	//vector<int>::iterator ite = vec.begin();
//	//while(ite != vec.end())
//	//{
//	//	cout << *ite << " ";
//	//	++ite;
//	//}
//
//	::for_each(vec.begin(),vec.end(),&Show);
//	cout << " size:" << vec.size() << " capacity:" << vec.capacity() << endl;
//
//	vec.push_back(1);
//	vec.push_back(2);
//	vec.push_back(3);
//
//	::for_each(vec.begin(),vec.end(),&Show);
//	cout << " size:" << vec.size() << " capacity:" << vec.capacity() << endl;
//
//	vec.pop_back();
//
//	::for_each(vec.begin(),vec.end(),&Show);
//	cout << " size:" << vec.size() << " capacity:" << vec.capacity() << endl;
//
//	vector<int>::iterator itePos = ::find(vec.begin(),vec.end(),2);
//
//	vec.insert(itePos,100);  //  ָ����λ�� ����
//
//	::for_each(vec.begin(),vec.end(),&Show);
//	cout << " size:" << vec.size() << " capacity:" << vec.capacity() << endl;
//
//	itePos = ::find(vec.begin(),vec.end(),100);
//
//	vec.erase(itePos);      //  ָ����λ�� ɾ��
//
//	::for_each(vec.begin(),vec.end(),&Show);
//	cout << " size:" << vec.size() << " capacity:" << vec.capacity() << endl;
//
//	vec.clear();   //  ���
//
//	::for_each(vec.begin(),vec.end(),&Show);
//	cout << " size:" << vec.size() << " capacity:" << vec.capacity() << endl;
//
//	system("pause");
//	return 0;
//}