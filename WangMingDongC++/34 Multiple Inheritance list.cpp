// 34 Multiple Inheritance list
#include <iostream>
using namespace std;

class A
{
public:
    A(int num)
    {
        cout << "A" << num << endl;
    }
};

class B
{
public:
    B(int num)
    {
        cout << "B" << num << endl;
    }
};

class C : public A, public B
{
public:
    C() : B(1), A(2)//先调用B，再调用A? //不是，先调用A，再调用B 按照继承的顺序
    {
        cout << "C" << endl;
    }
    C(int num) : B(num), A(num + 1)
    {
        cout << "C" << num << endl;
    }
};
