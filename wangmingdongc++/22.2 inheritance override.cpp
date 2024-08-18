#include <iostream>
using namespace std;
// 子类有一个函数和父类相同的话 子类使用此函数会优先使用子类的

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
    //那该如何通过b调用父类A的print函数呢？
    //使用作用域运算符A::print
    b.A::print();//限定符
    return 0;
}