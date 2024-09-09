#include <iostream>
using namespace std;
// 多继承

class A
{
public:
    int a = 1;
};

class B
{
public:
    int a = 2;
};

class C : public A, public B
{
public:
    int a = 3;
};

void test01()
{
    // 1.通过对象访问父类成员
    C c;
    cout << c.a << endl;    // 子类自身的a
    cout << c.A::a << endl; // 访问A的a
    cout << c.B::a << endl; // 访问B的a

    // 因为不是静态，所以不能通过类名访问了
}

int main()
{
    test01();
    return 0;
}