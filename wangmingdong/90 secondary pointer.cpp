#include <iostream>
using namespace std;
//二级指针，指向指针的指针

 
int main()
{
    int a = 11;
    int *p = &a;
    int **p2 = &p; //*p2保存的是p的地址 用什么类型保存地址呢?用指针类型int*，所以p2是int**

    cout << "a: " << a << endl;//11
    cout << "*p: " << *p << endl;//11
    cout << "**p2: " << **p2 << endl;//
    cout << endl;

    cout << "&a: " << &a << endl;//xxx
    cout << "p: " << p << endl;//xxx
    cout << "*p2: " << *p2 << endl;//xxx
    cout << endl;

    cout << "p2:" << p2 << endl;

    return 0;
}