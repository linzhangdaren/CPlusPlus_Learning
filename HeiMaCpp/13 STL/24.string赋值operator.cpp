#include <iostream>
#include <string>
#include <windows.h>
using namespace std;
// string赋值 operator

/*
string& operator=(const char* s);// 字符串字面值赋值给string
string& operator=(const string& s);// 把一个string对象赋值给另一个string对象
string& operator=(char c);// 把字符赋值给string对象
string& assign(const char* s);// 把字符串字面值赋值给string
string& assign(const char* s, int n);// 把字符串前n个字符赋值给string
string& assign(const string& s);// 把一个string对象赋值给另一个string对象
string& assign(int n, char c);// 用n个字符c赋值给string
*/

void test01()
{
    // 采用utf-8方式输出 防止乱码
    system("chcp 65001");

    string str1;
    str1 = "hello world"; // string& operator=(const char* s)

    string str2;
    str2 = str1; // string& operator=(const string& s)

    string str3;
    str3 = 'a'; // string& operator=(char c)

    string str4;
    str4.assign("hello c++"); // string& assign(const char* s)

    string str5;                 // 把前5个字符赋值给string
    str5.assign("hello c++", 5); // string& assign(const char* s, int n)

    string str6;       // 把一个string对象赋值给另一个string对象
    str6.assign(str4); // string& assign(const string& s)

    string str7;          // 用n个字符c赋值给string
    str7.assign(10, 'a'); // string& assign(int n, char c)

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