#include <iostream>
#include <string>
using namespace std;

// const 修饰成员函数

// 1.常函数
class Person
{
public:
    int m_A;
    mutable int m_B; // mutable 修饰成员变量，即使对象是常量，成员变量依然可以修改

    // 构造函数初始化列表初始化成员变量
    Person(int a, int b) : m_A(a), m_B(b) {}

    void showPerson() const // 这个const相当于最前面的那个const 如大写的:CONST Person* const this

    // 前面有隐含的this指针类型是 Person* const this [指针常量] 不能修改this指针指向的对象
    // 在成员函数后面加const，修饰的是this指针 [常量指针] 让指针指向的成员值不可修改
    {
        // m_A = 100;   // 后缀加了const，所以不能修改成员变量的值
        // this = NULL; // 错误，this是[指针常量]，不能改变指针的指向

        m_B = 100; // mutable修饰的成员变量，可以修改
    }
};

void test01()
{
    Person p{0, 0};
    p.showPerson();
}

// 2.常对象 只能调用常函数 ，不能调用普通函数
void test02()
{
    const Person p{0, 0}; // 常对象
    // 常对象，不能调用非常函数修改成员变量
    // p.m_A = 100; // 错误，常对象不能修改成员变量
    p.m_B = 100;    // 正确，mutable修饰的成员变量，可以修改
    p.showPerson(); // 可以调用常函数,不能调用普通函数因为会修改成员变量
}

int main()
{
    test02();

    return 0;
}