//字符串 字符组成一起就是字符串
//案例：1、c语言风格：char 变量名[]="字符串值"
//案例：2、c++风格：string 变量名="字符串"
//说明：案例2需要题头添加：#include<string>

#include<iostream>
#include<string>
using namespace std;

int main()
{
	string a = "一个字母可以代替一串话语，方便快捷\n但是题头记得要加#include<string>";
	cout << a << endl;


	system("pause");
	return 0;
}