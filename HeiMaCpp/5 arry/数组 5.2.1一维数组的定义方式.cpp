//数组的定义方式
//数据类型 数组名 [数组长度个数值]  列出数组名[下标号]=赋值；
//数据类型 数组名 [数组长度个数值]={值1，值2...};不赋值的话为0
//数据类型 数组名 [             ]={值1，值2...};填写值数组数组长度个数值自动生成
// arr    10		20		30		40		50 
//数组名 arr[0]  arr[1]  arr[2]  arr[3]  arr[4]
//        ↑ 下标从0开始索引，可以通过下标访问数组中的元素

#include<iostream>
using namespace std;

int main()
{
	//int arr[5];
	//arr[0] = 10;
	//arr[1] = 20;
	//arr[2] = 30;
	//arr[3] = 40;
	//arr[4] = 50;
	////下列输出可以用for循环代替
	//cout << arr[0] << endl;
	//cout << arr[1] << endl;
	//cout << arr[2] << endl;
	//cout << arr[3] << endl;
	//cout << arr[4] << endl;

	int arr2[5] = { 10,20,30,}; //{}里不赋值的话为0


	for (int i = 0; i < 5; i++)
	{
		cout << arr2[i] << endl;
	}

	system("pause");
	return 0;
}