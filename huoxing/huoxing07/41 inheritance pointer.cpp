#include <iostream>
using namespace std;
// 多继承中指针转换
// 转换第二个基类指针为第一个基类指针

class A
{

public:
    int Num = 0;
    int Num1 = 0;
    int Num2 = 0;

    A()
    {
        cout << "A" << endl;
    }
};

class B
{

public:
    int Num = 0;
    int Num1 = 0;
    int Num2 = 0;

    B()
    {
        cout << "B" << endl;
    }
};

class C : public A, public B
{

public:
    C()
    {
        cout << "C" << endl;
    }
};

int main()
{
    C *c = new C();

    cout << "c:" << c << endl;
    A *a = c;
    cout << "a:" << a << endl;
    B *b = c;
    cout << "b:" << b << endl;

    return 0;
}