//#include<iostream>
//using namespace std;
//
////命名空间可以提到复用性
//
//int nAge = 0;
//
//int main()
//{
//	//int nAge = 1;
//	//cout << nAge << endl;   //不加作用域，表示局部的
//	//cout << ::nAge << endl;  // ::作用域运算符，取得哪个作用域的变量
//	//                         //::前面什么都没有代表的是全局的
//
//	//int *p = new int; //new一个整形  也是在堆区分配空间
//	//cin >> *p;
//	//cout << *p << endl;  //delete删除堆区空间
//	//delete p;
//	//p = 0;
//
//	//int *arr =new int[3];  
//	//delete[]  arr;
//	//arr = 0;
//
//	////new 整形指针
//	//int **p =new int*;
//	////new 整形指针数组
//	//int *(*p)=new int*[3];
//	////new整形的二维数组
//	//int (*p)[3]= new int[2][3];
//	////new整形的数组指针
//	//int (**p)[3]=new (int(*)[3]);
//	////new 结构体
//	//struct Node
//	//{
//	//	int nVal;
//	//	char c;
//	//};
//	//Node* pNode = new Node;
//	//pNode->nVal = 100;
//	//pNode->c = 'a';
//	//delete pNode;
//	//pNode = 0;
//	
//	//int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
//	//for (int i = 0; i < 10; i++)
//	//{
//	//	cout << arr[i] <<" ";
//	//}
//	//cout << endl;
//	//for (int nVal : arr)  //数组名
//	//{
//	//	cout << nVal << " ";
//	//}
//	//cout << endl;
//
//	//for (auto nVal : arr)  //auto  自动识别数组的类型  
//	//{
//	//	cout << nVal << " ";
//	//}
//	//cout << endl;
//
//	//bool bflag = false;//布尔类型  值有两个 true false bool是一个字节
//
//	system("pause");
//	return 0;
//}