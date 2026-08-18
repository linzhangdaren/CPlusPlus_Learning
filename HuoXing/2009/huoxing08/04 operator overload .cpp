#include <iostream>
using namespace std;

class A
{
public:
    int Num = 0;
    int operator+(class B &b);
};

class B
{
public:
    int Num = 0;
};

int A::operator+(class B &b) // 得写在2个类下面 不然读不到
{
    return this->Num + b.Num;
}

// 主函数
int main()
{
    A a;
    B b;

    a.Num = 1;
    b.Num = 2;

    int num = a + b;
    cout << num << endl;

    return 0;
}
