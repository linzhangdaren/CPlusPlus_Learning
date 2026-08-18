#include <iostream>
using namespace std;
// 类内的成员变量和成员函数是分开储存的
// 只有非静态成员变量 才属于类对象上
// 静态成员变量 静态成员函数 非静态成员函数 都不属于类对象上

class Person
{
public:
};

class Person2
{
public:
    int m_A; // 非静态成员变量
};

class Person3
{
public:
    static int m_A; // 静态成员变量 不属于类对象上
    void func() {}  // 也不属于类对象上
};
int Person3::m_A = 0;
void test01()
{
    Person p;
    cout << "sizeof(p)=" << sizeof(p) << endl; // 空对象占用的内存是1
    // 因为编译器会自动给空对象分配一个字节，
    // 用来标识这个对象区分空对象占用的位置,防止两个空对象地址相同
    // 空对象也需要独一无二的内存地址
}

void test02()
{
    Person2 p;
    cout << "sizeof(p)=" << sizeof(p) << endl; // 4
}

void test03()
{
    Person3 p;
    cout << "sizeof(p)=" << sizeof(p) << endl; // 1不属于类对象上
}
// 主函数
int main()
{
    // test01();
    // test02();
    test03();
    return 0;
}