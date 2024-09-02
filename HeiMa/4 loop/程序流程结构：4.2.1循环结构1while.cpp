//while 循环语句
//满足循环条件值为真就执行循环语句
//案例：while(循环条件){循环语句}
//在屏幕中打印0-9

#include<iostream>
using namespace std;

int main()
{
	int a = 0;

	while (a<10)//如果括号里为1真值那么就
	{
		cout << a << endl;
		a++;
	}


	system("pause");
	return 0;

}