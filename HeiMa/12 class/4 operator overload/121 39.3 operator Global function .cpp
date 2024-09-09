#include <iostream>
using namespace std;
// 运算符重载
// 写一个全局函数，实现两个Person对象相加

class Person
{
public:
    int m_a;
    int m_b;
};

Person operator+(Person &p1, Person &p2)
{
    Person temp;
    temp.m_a = p1.m_a + p2.m_a;
    temp.m_b = p1.m_b + p2.m_b;
    return temp;
}

// 主函数
int main()
{
    Person p1;
    p1.m_a = 1;
    p1.m_b = 2;

    Person p2;
    p2.m_a = 3;
    p2.m_b = 4;

    Person p3 = operator+(p1, p2); // 调用本质
    Person p4 = p1 + p2;           // 简化operator+简化写法

    cout << "p3.m_a = " << p3.m_a << endl;
    cout << "p3.m_b = " << p3.m_b << endl;

    cout << "p4.m_a = " << p4.m_a << endl;
    cout << "p4.m_b = " << p4.m_b << endl;

    return 0;
}
