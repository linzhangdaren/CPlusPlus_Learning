//冒泡排序
//升降排序
//排序      

//排序伦数=元素个数-1
//对比次数=元素个数-排序轮数-1

#include<iostream>
using namespace std;

int main()
{
	int arr[9] = { 4,2,8,0,5,7,1,3,9 };

	cout << "排序前结果" << endl;
	for (int i = 0; i < 9; i++)
	{
		cout << arr[i] << " ";
	}


	
	for (int i = 0; i < 9 - 1; i++)//排序总轮数=元素个数-1；
	{	
		for (int j = 0; j < 9 - i - 1; j++)//每轮对比次数=元素个数-每轮次数-1
		{
			if (arr[j]>arr[j + 1])//如果第一个数字，比第二个数字大，交换两个数字
			{
				int temp = arr[j]; //互换代码
				arr[j] = arr[j+1];
				arr[j + 1] = temp;
			}
		}
	}
	//排序后结果：
	cout << "排序前结果" << endl;
	for (int i = 0; i < 9; i++)
	{
		cout << arr[i] << " ";
	}


	system("pause");
	return 0;
}