#include <iostream>
#include <string>
#include <windows.h>
using namespace std;
// string比较  比大小无太大意义 主要是比相等

/*
int compare(const string &s) const; // 与字符串s比较
int compare(size_t pos1, size_t count1, const string &s) const; // 与字符串s的从pos1开始的count1个字符比较
int compare(size_t pos1, size_t count1, const string &s, size_t pos2, size_t count2) const; // 与字符串s从pos2开始的count2个字符比较
int compare(const char *s) const; // 与C风格字符串s比较
int compare(size_t pos1, size_t count1, const char *s) const; // 与C风格字符串s从pos1开始的count1个字符比较
int compare(size_t pos1, size_t count1, const char *s, size_t count2) const; // 与C风格字符串s从pos1开始的count1个字符比较
*/

void test01()
{
    // 采用utf-8方式输出 防止乱码
    system("chcp 65001");

    string s1 = "hello";
    string s2 = "world";

    if (s1.compare(s2) == 0)
    {
        cout << "s1 == s2" << endl; // s1 == s2
    }
}

int main()
{
    test01();

    return 0;
}