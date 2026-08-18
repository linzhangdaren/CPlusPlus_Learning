#include <iostream>
using namespace std;

// 友元函数 运算符重载

class A
{
private:
    int Num = 1;
    friend int operator+(A &a, int Num); // 友元函数
};

int operator+(A &a, int Num);

int operator+(A &a, int Num) // a+1
{
    return a.Num + Num; // 拿不到A类的私有成员
}

// 主函数
int main()
{
    A a;
    int Num = a + 1;
    cout << Num << endl;
    Num = 3;
    cout << Num << endl;

    return 0;
}
