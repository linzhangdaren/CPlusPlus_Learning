#include<iostream>
using namespace std;
#include"zph.h"
//交换函数
//函数声明:放到后缀名为.h的头文件
//void swap(int a, int b);
//函数定义：放到后缀为.cpp的源文件中 
//void swap(int a, int b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//
//	cout << "a=" << a << endl;
//	cout << "b=" << b << endl;
//}
//分别放好后 源文件加头文件连接：
// #include<iostream>
// using namespace std
//函数.cpp添加
// #include"相应的函数文件名.h"
//							


int main()
{
	int a = 10;
	int b = 20;

	swap(a, b);


	system("pause");
	return 0;
}