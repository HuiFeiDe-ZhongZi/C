#include<iostream>
using namespace std;

void Area(int r)
{
	cout << r*r*3.14 << endl;
}
void Area(int x,int y)   //º¯ÊýµÄÖØÔØ
{
	cout << x*y << endl;
}

int main()
{
	Area(123);
	Area(123, 456);

	system("pause");
	return 0;
}