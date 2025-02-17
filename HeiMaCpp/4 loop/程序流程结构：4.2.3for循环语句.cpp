//for 循环语句
//案例：for(起始表达式；条件表达式；末未循环体){循环语句;}
//打印0-9

#include<iostream>
using namespace std;

int main()
{
	//       0        1      3
	for (int i = 0; i < 10; i++)
	{
		cout << i << endl;//2:  执行顺序0123 123 123...
	}


	system("pause");
	return 0;
}

//第二种写法：for括号里随便拆分
//int main()
//{
//	int i = 0;
//	for (;;)
//	{
//		if (i >= 10)
//		{
//			break;
//		}
//		cout << i << endl;
//		i++;
//	}
//	
//
//	system("pause");
//	return 0;
//}