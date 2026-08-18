#include <iostream>
using namespace std;
// 运算符重载
// 写一个成员函数，实现两个Person对象相加

class Person
{
public:
    int m_a;
    int m_b;

    Person operator+(Person &p); // 成员函数重载
};

Person Person::operator+(Person &p)
{
    Person temp;
    temp.m_a = this->m_a + p.m_a;
    temp.m_b = this->m_b + p.m_b;

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

    Person p3 = p1.operator+(p2); // 基础写法//如同上个文件中的 p3 = p1.PersonAddPerson(p2);
    Person p4 = p1 + p2;          // operator重载简化写法

    cout << p3.m_a << " " << p3.m_b << endl;
    cout << p4.m_a << " " << p4.m_b << endl;

    return 0;
}
