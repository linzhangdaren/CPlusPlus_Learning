#include <iostream>
using namespace std;
// 函数的基础使用

int add(int num1, int num2) // num1 num2为形参 形式口袋
{
	int sum = num1 + num2;
	return sum;
}

int main()
{
	int a = 10;
	int b = 20;
	int c = add(a, b); // ab为实参
	cout << c << endl;

	return 0;
}
