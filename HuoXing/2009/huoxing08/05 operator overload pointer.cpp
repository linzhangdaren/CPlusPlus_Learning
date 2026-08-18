#include <iostream>
using namespace std;

// 指针型运算符重载

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
    A *a = new A();
    B *b = new B();

    int Nun = *a + *b;
    cout << Nun << endl;
    return 0;
}
