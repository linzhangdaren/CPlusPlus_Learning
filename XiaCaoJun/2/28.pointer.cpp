#include <iostream>
using namespace std;

int main()
{
    int x = 10;
    cout << "=================" << endl;
    cout << "x = " << x << endl;
    cout << &x << endl;
    cout << *&x << endl; // 指针变量p 栈区分配

    cout << "=================" << endl;
    int *p = &x;
    cout << *p << endl; //指针占用8个字节 引用不占用内存
    cout << p << endl;
    cout << &p << endl; // 指针变量p 栈区分配

    cout << "==================" << endl;
    (*p)++; // 通过指针直接修改x的值 
    cout << x << endl;
    cout << *p << endl;

    cout << "==================" << endl;
    int &ref = x;//别名 引用
    cout << ref << endl;
    cout << &ref << endl; // 引用变量ref 地址一样 不占用内存

    return 0;
}