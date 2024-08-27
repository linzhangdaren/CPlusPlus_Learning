#include <iostream>
using namespace std;
// 某类的一个成员函数是另一个类的友元函数

// 参数问题 是否添加参数
//  访问非static成员 要做对象参数(引用或指针)
//  static成员或是全局变量 不需要对象参数
//  访问的是全局对象 不需要对象参数



class A
{
public:
    void FunTest(class B &); // 前向声明
};

class B
{
private:
    int Age;
    static int Num;//直接class B::Num 来使用就行不用传递
    friend void A::FunTest(class B &); // 声明A类中的FunTest函数为B类的友元函数
public:
    void PrintAge() { cout << Age << endl; }
};

void A::FunTest(B &b)
{
    b.Age = 100;
    B::Num = 200;//static成员函数直接使用类名::成员名来调用
}

int main()
{
    A a;
    B b;

    return 0;
}
