//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;


// vector 的使用尽量避免插入删除
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
//	vec.push_back(1);   //新空间是原来空间的1.5倍
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
//	vec.insert(ite, 100);    //指定的位置插入数字
//	::for_each(vec.begin(), vec.end(), &show);
//	cout << endl << "size:" << vec.size() << "capacity:" << vec.capacity() << endl;
//
//	ite=::find(vec.begin(), vec.end(), 100);
//	vec.erase(ite);  //指定的位置去删除   
//	::for_each(vec.begin(), vec.end(), &show);
//	cout << endl << "size:" << vec.size() << "capacity:" << vec.capacity() << endl;
//
//	vec.clear();   //清空
//	::for_each(vec.begin(), vec.end(), &show);
//	cout << endl << "size:" << vec.size() << "capacity:" << vec.capacity() << endl;
//
//	system("pause");
//	return 0;
//}