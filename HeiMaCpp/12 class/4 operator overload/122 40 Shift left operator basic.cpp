#include <iostream>
using namespace std;
// 左移运算符 基本逻辑
class Person
{
public:
    // 利用成员函数重载
    // 成员函数是无法做到左移运算的
    // 必须先创建一个对象p.operator<<(p)或者p.operator<<(cout) 简化就成p<<cout了
    // void operator<<(Person &p)
    // {
    // }

    int m_a;
    int m_b;
};

// 利用全局函数重载左移运算符
ostream &operator<<(ostream &cout, Person &p)
{
    cout << "m_a=" << p.m_a << endl;
    cout << "m_b=" << p.m_b << endl;
    return cout; // 返回cout对象，以便链式调用 cout<<xxx<<yyy<<zzz;
}

void test01()
{
    Person p;
    p.m_a = 10;
    p.m_b = 10;
    // cout<<p;终极目的是cout在左面
    cout << p << endl;
}

// 主函数
int main()
{
    test01();

    return 0;
}
