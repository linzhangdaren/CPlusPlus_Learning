//案例题目：有三只小猪，判断哪只小猪最重
//思路：cin值给abc
//如果a>b 
//	那继续判断a>c
//	如果a>c 
//	输出a最大
//	否则c最大
//那就继续判断b>c
//	如果b>c
//	输出b最大
//	否则c最大

#include<iostream>
using namespace std;

int main()
{
	int a = 0;
	int b = 0;
	int c = 0;

	cout << "请输入第一只小猪重量" << endl;
	cin >> a;
	cout << "请输入第二只小猪重量" << endl;
	cin >> b;
	cout << "请输入第三只小猪重量" << endl;
	cin >> c;
	
	cout << "第一只小猪重量为：" << a << endl;
	cout << "第二只小猪重量为：" << b << endl;
	cout << "第三只小猪重量为：" << c << endl;

	if (a > b)//判断a是否大于b 如果是的话那么
	{
		if (a > c)
		{
			cout << "第一只小猪最重" << endl;
		}
		else
		{
			cout << "第三只小猪最重" << endl;
		}
	}
	else//否则就是b大于a
	{
		if (b > c)
		{
			cout << "第二只小猪最重" << endl;
		}
		else
		{
			cout << "第三只小猪最重" << endl;
		}
	}

	system("pause");
	return 0;

}