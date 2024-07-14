#include<iostream>
using namespace std;

int max(int a, int b);//下方max定义提到上+冒号等于声明


int main()
{
	int a = 10;
	int b = 20;

	cout << max(a,b) << endl;


	system("pause");
	return 0;
}


int max(int a, int b)
{
	return a > b ? a : b;
}