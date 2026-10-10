#include <iostream>
#include <string>
#include <windows.h>
using namespace std;
// string的默认属性
// string() 默认构造函数
// string(const char* s) 拷贝构造函数
// string(const string& s) 拷贝构造函数
// string(int n, char c) 构造n个c字符的字符串

void test01()
{
    // 采用utf-8方式输出 防止乱码
    system("chcp 65001");

    string s1; // 默认构造 空值
    const char *str = "hello world";
    string s2(str);     // string(const char* s) 拷贝构造函数
    string s3(s2);      // string(const string& s) 拷贝构造函数
    string s4(10, 'a'); // string(int n, char c) 十个a

    cout << s1 << endl; // 空行
    cout << s2 << endl;
    cout << s3 << endl;
    cout << s4 << endl;
}

int main()
{
    test01();

    return 0;
}