//三目运算符
//     判断真假   真值    假值
//语法：表达式1？表达式2：表达式3
//如果1表达式为真值，执行2表达式，并返回表达式2
//如果1表达式为假，执行3表达式，并返回3表达式 
//案例题目：创建两个变量，哪个大赋给就赋给新的变量值
//思路： c = (a > b ? a : b);

#include<iostream>
using namespace std;

int main()
{
	int a = 10;
	int b = 20;
	int c = 0;

	c = (a > b ? a : b);
	cout << "c=" << c << endl;
	//比较完还返回的值是变量，可以继续赋值：
	(a > b ? a : b) = 100;
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	cout << "c=" << c << endl;


	system("pause");
	return 0;
}
