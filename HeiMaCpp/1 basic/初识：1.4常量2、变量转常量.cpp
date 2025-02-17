//2、修饰的变量：const 数据类型 常量名=常量值
//通常在变量定义的前加关键字const 修饰该变量为常量，不可修改

#include<iostream>
using namespace std;

int main()
{
	const int mouth = 12;
	//mouth = 24；就会出现错误因为int前面加const了
	cout << "一年有" << mouth << "月" << endl;
	system("pause");
	return 0;
}