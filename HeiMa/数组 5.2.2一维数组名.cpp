//一维数组名的用途
//1、统计整个数组在内存中的长度，站用了多少空间
//2、可以获取数组在内存中的首地址，可以查看内存中的地址编号
//注意：数组名是常量不可以赋值操作

#include<iostream>
using namespace std;

int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };

	cout << "整个数组空间占用内存的大小为：" << sizeof(arr) << "字节" << endl;
	cout << "每个元素占用空间为：" << sizeof(arr[0]) << "字节" << endl;
	cout << "数组中元素个数为：" << sizeof(arr) / sizeof(arr[0]) << "个" << endl;

	cout << "数组首地址为：" << arr << endl;
	cout << "首地址十进制位置为：" << (int)arr << endl;

	cout << "查看元素地址" << (int)&arr[0] << endl;//元素第一个地址与首地址是一样的
	cout << "查看元素地址第二个" << (int)&arr[1] << endl;//与第一个元素差数据类型的一个 这里是int所以差一个int字节


	system("pause");
	return 0;
}