#include <iostream>
using namespace std;


int main()
{
    char a;
    short b;
    int c;
    long d;
    long long e;
    // 输出变量所占用的字节数
    cout << "char a占用的字节为:sizeof(a)=" << sizeof(a) << endl;
    cout << "short b占用的字节为:sizeof(b)=" << sizeof(b) << endl;
    cout << "int c占用的字节为:sizeof(c)=" << sizeof(c) << endl;
    cout << "long d占用的字节为:sizeof(d)=" << sizeof(d) << endl;
    cout << "long long e占用的字节为:sizeof(e)=" << sizeof(e) << endl;

    return 0;
}