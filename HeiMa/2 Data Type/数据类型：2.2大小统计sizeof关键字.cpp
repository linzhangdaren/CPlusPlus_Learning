//可以统计数据类型占用内存的大小
//案例：cout<<sizeof(数据类型或者变量）<<endl;
#include<iostream>
using namespace std;

int main()
{
	short a = 1;
	int b = 1;
	long c = 1;
	long long d = 1;

	cout << "short占用内存：" << sizeof(short) <<"字节"<< endl;//或者sizeof(a)
	cout << "int占用内存：" << sizeof(int) << "字节" << endl;//或者sizeof(b)
	cout << "long占用内存：" << sizeof(long) << "字节" << endl;//或者sizeof(c)
	cout << "long long占用内存：" << sizeof(long long) << "字节" << endl;//或者sizeof(d)

	system("pause");
	return 0;
}