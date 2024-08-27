#include <iostream>
using namespace std;
// 友元类
//  类A是类B的友元类，则类A可以访问类B的私有成员和保护成员
// 单向关系不是双向的

class A
{
private:
    int NumA;

public:
    void ChangeNum(const class B &); // 声明B的引用
};

class B
{
private:
    int NumB = 100;
    friend A; // 声明A是B的友元类
};

void A::ChangeNum(const class B &b)
{
    cout << b.NumB << endl; // 访问B的私有成员
}

int main()
{
    A a;
    B b;
    a.ChangeNum(b);

    return 0;
}