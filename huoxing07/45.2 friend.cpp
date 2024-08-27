#include <iostream>
using namespace std;
// 友元 函数 无参

class A
{
private:
    int Num = 0;

public:
    void PrintNum() { cout << Num << endl; }; // 成员函数

    friend void ChangeNum(); // 声明友元函数 虽然写在了A类里,但友元函数不属于任何类,它属于全局函数
    // 传什么值都可以,或者不传
};

A a;

void ChangeNum()
{
    a.Num = 100;
}

int main()
{

    ChangeNum(); // 调用友元函数
    a.PrintNum();
    return 0;
}
