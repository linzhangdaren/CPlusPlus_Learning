#include <iostream>
using namespace std;

int max(int a, int b); // 下方max定义提到上+分号等于声明
// 此声明可以写多次，但定义只能写一次

int main()
{
	int a = 10;
	int b = 20;

	cout << max(a, b) << endl;

	system("pause");
	return 0;
}

int max(int a, int b)
{
	return a > b ? a : b;
}