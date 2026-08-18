//程序流程结构：1、选择结构1.4 if嵌套语句
//案例：如果分数大于600，为大学一本线，在屏幕上输出
// 如果在600分一本的基础上大于700分就是北大，大于650就是清华，大于600就人大
//if(分数的变量值 >xxx)//这里不能加分号，会分离大括号里面内容，满足于否都会执行
//{
//	cout << "恭喜考上大学" << endl;
//	if (分数的变量值 > 700)
//	{
//		cout << "您能考入北大" << endl;
//	}
//	else if (分数的变量值 > 650)
//	{
//		cout << "您能考入清华" << endl;
//	}
//	else
//	{
//		cout << "你能考入人大" << endl;
//	}
//		
//}
// 
//else if//备胎1、2、3
//{
//cout << "xxx" << endl;
//}
// 
//else//都不满足else收尾，金盆洗手
//{
// cout<<"xxx"<<endl;
//}


#include<iostream>
using namespace std;

int main()
{
	int a = 600;
	int qh = 700;
	int bd = 650;
	int rm = 600;
	int b = 500;
	int c = 300;
	int f = 0;

	cout << "请输入您的分数" << endl;
	cin >> f;
	cout << "您输入的分数为" << f << "分" << endl;

	if (f >= a)
	{
		cout << "恭喜您考入一本大学" << endl;
		if (f >= qh)
		{
			cout << "您能考入清华大学" << endl;
		}

		else if (f >= bd)
		{
			cout << "您能考入北大" << endl;
		}
		
		else
		{
			cout << "您能考入人民大学" << endl;
		}
	}

	else if (f >= b)
	{
		cout << "恭喜您考入二本大学" << endl;
	}

	else if (f >= c)
	{
		cout << "恭喜您考入三本大学" << endl;
	}
	
	else
	{
		cout << "很遗憾，请再接再厉" << endl;
	}

	system("pause");
	return 0;
}