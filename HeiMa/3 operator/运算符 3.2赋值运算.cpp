//赋值运算符 
//简化a=a+2;为a+=2;
//同理 + - * / %

#include<iostream>
using namespace std;

int main()
{
	int a = 10;
	a += 2;
	cout << a << endl;

	a = 20;
	a -= 5;
	cout << a << endl;

	system("pause");
	return 0;

}