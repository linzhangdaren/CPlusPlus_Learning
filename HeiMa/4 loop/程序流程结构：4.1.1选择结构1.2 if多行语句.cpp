//程序流程结构：1、选择结构1.2 if多行语句
//案例：如果分数大于600，为大学一本线，在屏幕上输出
//if(分数>600)//这里不能加分号，会分离大括号里面内容，满足于否都会执行
//{
//	cout << "恭喜考上大学" << endl;
//
//}
//else//备胎
//{
//cout << "xxx" << endl;
//}

#include<iostream>
using namespace std;

int main()
{
	int a = 600;
	int b = 0;

	cout << "请输入您的分数，输入完后请按回车" << endl;
	cin >> b;
	cout << "您的分数为：" << b << endl;

	if (b > a)//如果满足此条件则执行第一选项，正房
	{
		cout << "恭喜您考上一本大学" << endl;
	}

	else//如果没有满足第一条件就执行此行，备胎
	{
		cout << "很遗憾请再接再厉" << endl;
	}
	system("pause");
	return 0;

}