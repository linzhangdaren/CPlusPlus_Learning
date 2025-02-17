//continue 蒙版功能 可以做奇数偶数

#include<iostream>
using namespace std;


int main()
{
	for (int a = 0; a <= 100; a++)
	{
		if (a % 2 == 0)
		{
			continue;
		}

		cout << a << endl;
	}



	system("pause");
	return 0;

}