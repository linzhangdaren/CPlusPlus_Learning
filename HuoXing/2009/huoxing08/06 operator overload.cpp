#include <iostream>
using namespace std;

// 全局运算符重载

class A
{
public:
    int Num;
};

int operator+(A &a, int Num);
int operator+(int Num, A &a);

int operator+(A &a, int Num) // a+1
{
    return a.Num + Num;
}

int operator+(int Num, A &a) // 1+a
{
    return a.Num + Num;
}

// 主函数
int main()
{
    A a;
    a.Num = 1;
    cout << a + 1 << endl;
    cout << 1 + a << endl;

    return 0;
}
