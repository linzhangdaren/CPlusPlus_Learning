#include <iostream>
using namespace std;
// 什么叫做重写?在子类中出现一个和父类中完全相同的函数
//  子类有一个函数和父类相同的话 子类使用此函数会优先使用子类的
// 如果重写了后 子类不会继承父类的重载方法

class A
{
public:
    void print()
    {
        cout << "A类" << endl;
    }
    void print(int a)
    {
        cout << "A类重载的int a" << endl;
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
    // b.print(1); // 无法呗调用 因为子类的同名函数会覆盖父类中所有的同名函数
    class A a; // 但是创建a对象后，a.print(1)可以调用，因为a是A类对象，调用的是A类中的print函数
    a.print();
    a.print(1);
    return 0;
}