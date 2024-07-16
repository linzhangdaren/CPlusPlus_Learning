//常量：无法修改的 周月年固定天数
// 
//1、宏常量：#define 常量名 常量值
//通常在文件上方定义int main()前加，表示一个常量
//案例：define day 7

#include<iostream>
using namespace std;

#define day 7
int main()
{
	cout << "一周有" << day << "天" << endl;
	system("pause");
	return 0;
}