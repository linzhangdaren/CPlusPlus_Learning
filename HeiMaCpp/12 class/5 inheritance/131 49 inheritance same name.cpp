#include <iostream>
using namespace std;
//  继承同名成员处理的方式

// 子类访问父类同名成员需要加作用域符号 :: 俩冒号
// 如: 子类对象.父类名::成员名 //s.Base::m_Age

class Base
{
public:
    int m_Age;

    Base()
    {
        m_Age = 100;
    }
    // 同名成员函数
    void func()
    {
        cout << "父类函数调用" << endl;
    }

    int func(int a)
    {
        cout << "父类重载" << endl;
    }
};

class Son : public Base
{
public:
    int m_Age;

    Son()
    {
        m_Age = 20;
    }

    // 同名成员函数
    void func()
    {
        cout << "子类函数调用" << endl;
    }
};

// 同名成员函数
void test01()
{
    Son s;
    cout << s.Base::m_Age << endl;
    // 通过子类对象访问父类同名成员 加上作用域符号
}

// 同名成员函数
void test02()
{
    Son s;
    s.Base::func();   // 子类对象访问同名成员函数，会优先访问子类，子类没有再访问父类
    s.Base::func(10); // 出现同名成员函数子类会隐藏所有同名函数
}

// 主函数
int main()
{
    test02();
}