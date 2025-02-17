#include <iostream>
using namespace std;
// 引用 形参修饰实参
// 交换函数

// 值传递
void swap1(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}
// 地址传递
void swap2(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
// 引用传递
void swap3(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int a = 10;
    int b = 20;
    // 值传递
    swap1(a, b);
    cout << "值传递" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    // 指针地址传递
    swap2(&a, &b);
    cout << "地址传递" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    // 引用传递
    swap3(a, b);
    cout << "引用传递" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    return 0;
}