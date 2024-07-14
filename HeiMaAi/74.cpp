#include <iostream>
using namespace std;

int main()
{
    int *p = new int; // 申请内存地址赋值给指针p
    *p = 10;          // 给p所指向的内存地址赋值为10

    cout << *p << endl; // 输出p所指向的内存地址的值
    cout << p << endl;  // 输出p的值
    delete p;           // 释放p所指向的内存地址

    cout << *p << endl; // 释放值为随机值
    cout << p << endl;  // 释放的地址还是原来的地址 残羹剩饭

    return 0;
}