#include <iostream>
using namespace std;
// 继承中 静态成员处理的方式 static

// static静态成员变量的特点:
// 1.共享同一份数据
// 2.编译阶段就分配内存
// 3.类内声明，类外初始化
// static成员函数的特点:
// 1.只能访问static成员变量和函数
// 2.共享一份函数实例
// 3.静态成员函数没有this指针

class Base
{
public:
    // 成员变量
    static int m_A; // 共享数据.类内声明，类外初始化
    // 成员函数
    static void func()
    {
        cout << "父类静态函数调用" << endl;
    }
};

int Base::m_A = 10; // 类外初始化

class Son : public Base
{
public:
    // 成员变量
    static int m_A; // 和父类同名成员变量
    // 成员函数
    static void func()
    {
        cout << "子类静态函数调用" << endl;
    }
};

int Son::m_A = 20; // 子类中的静态成员变量初始化

void test01()
{
    // 1.通过子类对象去访问
    Son s;
    cout << "子类下的 m_A = " << s.m_A << endl;     // 访问子类同名成员变量
    cout << "父类下的 m_A=" << s.Base::m_A << endl; // 通过子类名访问父类同名成员变量

    // 2.直接通过子类名去访问
    cout << "子类下的 m_A = " << Son::m_A << endl;     // 访问子类同名成员变量
    cout << "父类下的 m_A=" << Base::m_A << endl;      // 直接通过父类同名成员变量,和子类无关
    cout << "父类下的 m_A=" << Son::Base::m_A << endl; // 通过子类名访问父类同名成员变量
    // Son::Base::m_A 这的两个双冒号意思是不一样的:
    // 第一个::双冒号意思是通过Son的类名去访问 (类名::)
    // 第二个::双冒号意思是通过Base的作用域去访问(作用域::)
}

void test02()
{
    // 1.通过子类对象去访问
    Son s;
    s.func();       // 子类静态成员函数 调用的是子类自己的
    s.Base::func(); // 通过子类对象访问父类静态成员函数

    // 2.直接通过子类名去访问 不创建对象
    Son::func();       // 子类自身的
    Base::func();      // 父类自身的
    Son::Base::func(); // 通过子类名访问父类静态成员函数
}
// 主函数
int main()
{
    test01();
}