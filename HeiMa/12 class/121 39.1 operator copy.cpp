#include <iostream>
using namespace std;
// 运算符重载 的底层原理 两个类的对象相加

class Person
{
public:
    int m_A;
    int m_B;
    // 成员函数
    Person PersonAddPerson(Person &p)
    // 重载的基本原型 以后用operator+来替代PersonAddPerson
    {
        Person temp;
        temp.m_A = m_A + p.m_A;
        temp.m_B = m_B + p.m_B;
        return temp;
    }
};

int main()
{
    Person p1, p2, p3;
    p1.m_A = 10;
    p1.m_B = 20;

    p2.m_A = 30;
    p2.m_B = 40;

    p3 = p1.PersonAddPerson(p2);
    // p3 = p1.operator+(p2);如果用operator+重载函数就可以简化写了
    // 简化写法 p3 = p1 + p2;
    cout << "p3.m_A = " << p3.m_A << endl;
    cout << "p3.m_B = " << p3.m_B << endl;

    return 0;
}