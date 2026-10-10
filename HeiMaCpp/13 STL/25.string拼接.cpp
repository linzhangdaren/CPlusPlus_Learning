#include <iostream>
#include <string>
#include <windows.h>
using namespace std;
// string拼接

/*
string& operator+=(const char* str);//重载+=
string& operator+=(const char c);//重载+=
string& operator+=(const string& str);//重载+=
string& append(const char* s);//追加字符到结尾
string& append(const char* s, int n);//把字符串s的前n个字符追加到结尾
string& append(const string& str);//追加字符串到结尾
string& append(const string& str, int pos, int n);//把字符串str从pos开始的n个字符追加到结尾

*/

void test01()
{
    // 采用utf-8方式输出 防止乱码
    system("chcp 65001");

    string str1 = "hello";
    str1 += "world";

    string str2;
    str2 += 'a';

    string str3;
    str3 = "bc";
    str3 += str2;

    string str4;
    str4.append("hello");

    string str5;
    str5.append("hello", 2);

    string str6;
    str6.append(str1);

    string str7;
    str7.append(str1, 0, 2);

    cout << "str1 = " << str1 << endl;
    cout << "str2 = " << str2 << endl;
    cout << "str3 = " << str3 << endl;
    cout << "str4 = " << str4 << endl;
    cout << "str5 = " << str5 << endl;
    cout << "str6 = " << str6 << endl;
    cout << "str7 = " << str7 << endl;
}

int main()
{
    test01();

    return 0;
}