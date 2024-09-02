//五只小猪称体重，谁最大？

#include<iostream>
using namespace std;



int main()
{
	int arr[5] = { 300,100,43,391,500 };
	int max = 0;
	for (int i = 0; i < 5; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	cout << max << endl;

	system("pause");
	return 0;
}