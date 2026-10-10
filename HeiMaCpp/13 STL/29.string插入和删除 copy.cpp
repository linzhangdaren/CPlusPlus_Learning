#include <iostream>
#include <string>
#include <windows.h>
using namespace std;
// string字符插入和删除

/*
string& insert(int pos, const char*s);//插入字符串
string& insert(int pos,const string& str);插入字符串
string& insert(int pos, int n, char c);//在指定位置插入n个字符c
string& erase(int pos, int n = npos);删除从pos开始的n个字符
*/

void test01()
{
    // 采用utf-8方式输出 防止乱码
    system("chcp 65001");
    // 插入
    string str = "hello";
    str.insert(1, "abc"); // 在1位置插入abc
    cout << str << endl;

    // 删除
    str.erase(1, 3); // 从1位置开始删除3个字符
    cout << str << endl;
}

int main()
{
    test01();

    return 0;
}