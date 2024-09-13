#include <iostream>
using namespace std;
// 友元 函数
// 不是类成员函数，但是可以访问类的私有成员 在哪声明定义都可以
//传值

class A
{
private:
    int Num = 0;

public:
    void PrintNum() { cout << Num << endl; }; // 成员函数

    friend void ChangeNum(A &a); // 声明友元函数 虽然写在了A类里,但友元函数不属于任何类,它属于全局函数
    // 传什么值都可以,或者不传
};

void ChangeNum(A &a)
{
    a.Num = 100;
}

int main()
{
    class A a;
    ChangeNum(a);// 调用友元函数
    a.PrintNum();
    return 0;
}
