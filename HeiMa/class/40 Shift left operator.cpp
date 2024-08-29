#include <iostream>
using namespace std;
// 运算符重载之左移运算符重载
// 输出对象中的全部的成员变量
// 成员函数实现左移运算符重载 cout只能在左面,所以只能用全局函数

class Person
{
private:
    int m_a;
    int m_b;

public:
    friend ostream &operator<<(ostream &cout, Person &p); // 友元函数实现左移运算符重载
    // 构造函数
    Person(int a, int b)
    {
        this->m_a = a;
        this->m_b = b;
    }
};

// 全局函数实现左移运算符重载
ostream &operator<<(ostream &cout, Person &p) // 简化成cout<<p,但是返回类型是什么呢?右键鼠标转到定义,是ostream&类型
{
    cout << "m_a = " << p.m_a << endl;
    cout << "m_b = " << p.m_b << endl;
    return cout; // 返回cout,都则不能再连续使用<<了
}

// 主函数
int main()
{
    // test01(); // 1. 成员函数实现左移运算符重载
    Person p(30, 40);
    cout << p << endl;

    return 0;
}
