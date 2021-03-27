#include<iostream>
#include<stack>
#include<queue>
using namespace std;

//匹配{}  与撤销  都可以用栈
//栈    先进后出 再栈顶添加，栈顶删除，中间不允许操作
//队列  先进先出 在队尾添加，队头删除，中间不允许操作
//栈和队列是用来临时的存储数据，初试终止状态都应该是空

int main()
{
	//---------------------------------------------栈--------------------------------------------------
	//stack<int> sk;
	//sk.push(1);
	//sk.push(2);
	//sk.push(3);
	//sk.push(4);

	//while (sk.empty()==false)
	//{
	//	cout << sk.top()<< "  ";     //输出顶部元素 
	//	sk.pop();           //删除顶部元素 使溢出下一个
	//}
	//cout << endl;
	//---------------------------------------------队列--------------------------------------------------
	//queue<int> qu;
	//qu.push(1);
	//qu.push(2);
	//qu.push(3);
	//qu.push(4);

	//while (qu.empty()==false)
	//{
	//	cout << qu.front() << "  ";
	//	qu.pop();
	//}


	system("pause");
	return 0;
}

