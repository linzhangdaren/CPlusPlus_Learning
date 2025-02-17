//srand((unsigned int)time(NULL));//时间随机种子，需要头文件#include<ctime>
//rand() % 100 + 1;//随机数

#include<iostream>
using namespace std;
#include<ctime>

int main()
{
	srand((unsigned int)time(NULL));
	int m = rand() % 100 + 1;
	int x = 0;
	cout << "请输入您猜的数字" << endl;

	while (1)
	{
		cin >> x;
		if (x > m)
		{
			cout << "您猜的过大" << endl;
		}
		else if (x < m)
		{
			cout << "您猜的过小" << endl;
		}
		else
		{
			cout << "恭喜您猜对了" << endl;
			break;
		}
	}
	

	system("pause");
	return 0;
}