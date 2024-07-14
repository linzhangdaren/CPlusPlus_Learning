//循环语句 do while 先执行后判断
//                          真值循环
//案例：do{ 循环语句 } while (循环条件)

#include<iostream>
using namespace std;

int main()
{
	int a = 0;
	do
	{
		cout << a++ << endl;
	} while (a <= 10);


	system("pause");
	return 0;
}
