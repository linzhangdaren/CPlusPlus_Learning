//首位交换元素
//int start = 0;
//int end = sizeof(arr)/sizeof(arr[0])-1
//
// arr    1   2    3   4   5
//下标	  0   1    2   3   4 
//int temp = arr[strat];
//arr[start] = arr[end];
//arr[end] = temp;



#include<iostream>
using namespace std;
//1、创建数组
int main()
{
	int arr[5] = { 1,2,3,4,5 };

	cout << "数组逆置之前" << endl;

	for (int i = 0; i < 5; i++)
	{	
		cout << arr[i] << endl;
	}
	//2、实现逆序
	//2.1记录起始下标位置
	//2.2记录结束下标位置
	//2.3起始下标位置与结束下标位置互换
	//2.4起始位置++ 结束位置--
	//2.5循环执行：2.1到起始位置>=结束位置

	int start = 0;//起始下标位置
	int end = sizeof(arr) / sizeof(0) - 1;//结束位置

		while (start<end)
	{
		int temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;
	//更新下标
		start++;
		end--;
	}
		cout << "数组元素置换后" << endl;

		for (int i = 0; i < 5; i++)
		{
			cout << arr[i] << endl;
		}




	system("pause");
	return 0;
}