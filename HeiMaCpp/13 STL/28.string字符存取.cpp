#include <iostream>
#include <string>
#include <windows.h>
using namespace std;
// string字符存取 底层是 数组

/*
char& operator[](int n); // 通过[]方式访问
char& at(int n); // 通过at方式访问
char& front(); // 返回第一个字符
char& back(); // 返回最后一个字符
operator char*(); // 返回指向字符数组的指针
const char* c_str(); // 返回指向字符数组的指针
*/

void test01()
{
    // 采用utf-8方式输出 防止乱码
    system("chcp 65001");

    string str = "hello world";
    cout << "str[0] = " << str[0] << endl; // h
    // 单个访问 遍历string字符
    for (int i = 0; i < str.size(); i++)
    {
        cout << str[i] << " ";
    }
    cout << endl;

    str[0] = 'a';
    cout << "str" << str << endl; // aello world
    str.at(1) = 'b';
    cout << "str" << str << endl; // abello world
}

int main()
{
    test01();

    return 0;
}