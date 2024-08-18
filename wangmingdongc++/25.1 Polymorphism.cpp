#include <iostream>
using namespace std;
// 多态简单的了解
// 静态多态

int add(int a, int b)
{
    cout << "int类型的函数被调用" << endl;
    return a + b;
}

double add(double a, double b)
{
    cout << "double类型的函数被调用" << endl;
    return a + b;
}

int main()
{
    add(1, 2);
    add(1.1, 2.2);

    return 0;
}