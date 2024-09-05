#include <iostream>
using namespace std;
// 就算不写拷贝函数系统也会提供一个默认看不见的拷贝函数,只不过是浅拷贝
// 写了拷贝函数,系统就不会再提供默认的拷贝函数了
class Person
{
public:
    // 成员变量
    int m_Age;

    // 成员函数
    // 默认构造函数
    Person()
    {
        cout << "默认构造函数" << endl;
    }
    // 有参构造函数
    Person(int age)
    {
        cout << "有参构造函数" << endl;
        m_Age = age;
    }
    // 拷贝函数
    // Person(const Person &p)//如果不采用这个,系统也会提供一个默认的拷贝函数,但是这个默认的拷贝函数是浅拷贝,所以需要自己写一个深拷贝函数
    // {
    //     cout << "拷贝函数" << endl;
    //     m_Age = p.m_Age;
    // }

    // 析构函数
    ~Person()
    {
        cout << "析构函数" << endl;
    }
};

void test01()
{
    Person p1(18);
    // p1.m_Age = 18;
    Person p2(p1);
    cout << "p1的年龄为：" << p1.m_Age << endl;
    cout << "p2的年龄为：" << p2.m_Age << endl;
}

int main()
{
    test01();

    return 0;
}