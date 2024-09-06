#include <iostream>
using namespace std;
// 静态成员函数
// 所有对象共用一个函数
// 静态成员函数只能访问静态成员变量 因为无法区分是哪个对象做修改的

class Person
{
public: // 如果是private权限类外也访问不到
    // 成员变量
    int m_B;

    // 静态成员变量
    static int m_A;

    // 静态成员函数
    static void func()
    { // 静态成员函数只能访问静态成员变量
        m_A = 10;
        // m_B = 10; // 错误，静态成员函数只能访问静态成员变量
        cout << "static void func()调用" << endl;
    }
};

int Person::m_A = 0;

void test01()
{
    // 1.通过对象调用静态成员函数
    Person p;
    p.func();
    // 2.通过类名调用静态成员函数
    Person::func();
}

int main()
{
    test01();

    return 0;
}