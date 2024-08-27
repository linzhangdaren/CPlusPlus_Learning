#include <iostream>
using namespace std;
// 某类的一个成员函数是另一个类的友元函数

class A
{
public:
    void FunTest(class B &); // 前向声明
};

class B
{
private:
    int Age;
    friend void A::FunTest(class B &); // 声明A类中的FunTest函数为B类的友元函数

public:
    void PrintAge() { cout << Age << endl; }
};

void A::FunTest(B &b)
{
    b.Age = 100;
}

int main()
{
    A a;
    B b;

    return 0;
}
