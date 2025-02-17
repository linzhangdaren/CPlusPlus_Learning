#include <iostream>
#include <string>
using namespace std;
// 关系运算符 relational operator
// 判断两个类之间的大小相等之类的关系
// 关系运算符包括：==、!=、<、>、<=、>=

class Person
{
public:
    // 成员变量
    string m_Name;
    int m_Age;
    // 构造函数
    Person(string name, int age)
    {
        m_Name = name;
        m_Age = age;
    }

    // 关系运算符重载=号
    bool operator==(Person &p)
    {
        if (this->m_Name == p.m_Name && this->m_Age == p.m_Age)
        {
            return true;
        }
        return false;
    };
    // 关系运算符重载!=号
    bool operator!=(Person &p)
    {
        if (this->m_Name != p.m_Name || this->m_Age != p.m_Age)
        {
            return true;
        }
        return false;
    }
};

void test01()
{
    Person p1("Tom", 18);
    Person p2("Jerry", 18);

    // 需要重载=号
    if (p1 == p2)
    {
        cout << "p1和p2是相等的" << endl;
    }
    else
    {
        cout << "p1和p2是不相等的" << endl;
    }
    // 需要重载!=号
    if (p1 != p2)
    {
        cout << "p1和p2是不相等的" << endl;
    }
    else
    {
        cout << "p1和p2是相等的" << endl;
    }
}

int main()
{
    test01();

    return 0;
}