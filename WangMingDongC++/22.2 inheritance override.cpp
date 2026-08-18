#include <iostream>
using namespace std;
// 父类被重写后，子类无法调用父类被重写的方法
// 如何调用父类被重写的方法呢？用限定符::

class A
{
public:
    void print()
    {
        cout << "A类" << endl;
    }
};

class B : public A
{
public:
    void print()
    {
        cout << "B类" << endl;
    }
};
// 主函数
int main()
{
    class B b;
    b.print(); // 此函数是调用的子类B的print函数
    // 那该如何通过b调用父类A的print函数呢？
    // 使用作用域运算符A::print
    b.A::print(); // 限定符
    return 0;
}