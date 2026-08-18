#include <iostream>
using namespace std;

// protected 继承时可以访问
// private 继承时不能访问

class A
{
public:
    int a;

protected: // 继承时可以访问
    int b;

private: // 继承时不能访问
    int c;
};

class B : public A
{
public:
    void test()
    {
        a = 10;
        b = 20;
        // c = 30; // 错误，不能访问private成员
    }
};

// 主函数
int main()
{
    B b;

    b.test();

    return 0;
}