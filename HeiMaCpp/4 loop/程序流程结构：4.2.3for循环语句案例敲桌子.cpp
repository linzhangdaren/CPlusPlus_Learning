//for 敲桌子案例
//1-100,个位十位含有7，或者是7的倍数就打印敲桌子；其他直接输出打印


#include<iostream>
using namespace std;

int main()
{
	for (int a = 1; a <= 100; a++)
	{
		if (a % 7 == 0 || a % 10 == 7 || a / 10 == 7)
		{
			cout << a << " —敲桌子"  << endl;
		}
		else
		{
			cout << a << endl;
		}
	}

	system("pause");
	return 0;
}
