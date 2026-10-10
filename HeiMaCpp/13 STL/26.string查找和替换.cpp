#include <iostream>
#include <string>
#include <windows.h>
using namespace std;
// string查找和替换

/*
int find(const string& str, int pos = 0) const; //查找str第一次出现的位置，返回值是索引值，如果找不到返回-1
int find(const char* s, int pos = 0) const; //查找s第一次出现的位置，返回值是索引值，如果找不到返回-1
int find(const char* s, int pos, int n) const; //从pos位置查找字符串s的前n个字符第一次出现的位置
int find(char c, int pos = 0) const; //查找字符c第一次出现的位置
int rfind(const string& str, int pos = npos) const; //查找str最后一次出现的位置，返回值是索引值，如果找不到返回-1
int rfind(const char* s, int pos = npos) const; //查找s最后一次出现的位置，返回值是索引值，如果找不到返回-1
int rfind(const char* s, int pos, int n) const; //从pos位置查找字符串s的前n个字符最后一次出现的位置
int rfind(char c, int pos = npos) const; //查找字符c最后一次出现的位置
string*&replace(int pos, int n, const string& str); //替换从pos开始的n个字符为字符串str
string* &replace(int pos, int n, const char* s); //替换从pos开始的n个字符为字符串s
*/

void test01()
{
    // 采用utf-8方式输出 防止乱码
    system("chcp 65001");
    // 1.查找
    // 1.1从左往右查找
    string str1 = "abcdefgabcdefgabc";
    int pos1 = str1.find("a");         // 输出要查找字符的下标 从0开始
    cout << "pos1 = " << pos1 << endl; // 可以用pos1做if判断
    // 1.2从右往左查找
    int pos2 = str1.rfind("a");        // 输出要查找字符的下标 从0开始
    cout << "pos2 = " << pos2 << endl; // 可以用pos2做if判断

    // 2.替换
    str1.replace(0, 3, "1111"); // 从0开始替换3个字符为1111 多了一个1
    cout << "str1 = " << str1 << endl;
}

int main()
{
    test01();

    return 0;
}