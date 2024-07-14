//数组名可查询内存:sizeof(arr)
//数组首地址

#include<iostream>
using namespace std;

int main()
{
	int arr[2][3] =
	{
		{1,2,3},
		{4,5,6}
	};
	cout << "占用内存空间为 " << sizeof(arr) << endl;
	cout << "第一行占用内存 " << sizeof(arr[0]) << endl;
	cout << "第一个元素占用内存为 " << sizeof(arr[0][0]) << endl;

	cout << "数组行数为 " << sizeof(arr) / sizeof(arr[0]) << endl;//总空间大小除以第一行的大小等于行数
	cout << "数组列数为" << sizeof(arr[0]) / sizeof(arr[0][0]) << endl;//一行的空间大小除以一个元素大小个数等于列

	//查看首地址(int)十进制转换
	cout << (int)arr << endl;
	//二维数组第一行首地址
	cout << (int)arr[0] << endl;
	//第一行第一列数据首地址记得加&取址符
	cout << (int) & arr[0][0] << endl;

	system("pause");
	return 0;
}