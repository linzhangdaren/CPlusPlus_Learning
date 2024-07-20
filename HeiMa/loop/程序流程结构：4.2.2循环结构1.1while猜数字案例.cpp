//随机生成1到100的之间的数字：
//rand()%100+1;不加1会生成0-99，如果改为101会生成0-100
//随机数：srand((unsigned int)time(NULL));//头文件需要添加#include<ctime>
//玩家猜测
//如果猜错：提示玩家数字过大或过小
//如果猜对：恭喜玩家胜利并且退出游戏

#include<iostream>
#include<ctime>
using namespace std;

int main()
{
	srand((unsigned int)time(NULL));
	int a = rand() % 100 + 1;//随机时间数种子才可以避免42一样的值
	int x = 0;

	cout << a << endl;//这个是随机数谜底需要屏蔽注释
	cout << "请输入您猜测的数值" << endl;
	while (1)
	{
		cin >> x;

		if (x > a)
		{
			cout << "您猜的过大" << endl;
		}

		else if (x < a)
		{
			cout << "您猜的过小" << endl;
		}

		else
		{
			cout << "恭喜您猜对了" << endl;
			break;//猜对后退出游戏
		}
	}

	system("pause");
	return 0;
}