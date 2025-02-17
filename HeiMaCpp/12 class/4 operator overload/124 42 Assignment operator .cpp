#include <iostream>
using namespace std;
// 赋值运算符 Assignment operator
// 重载赋值运算符 是为了避免浅拷贝导致析构二次释放问题
class Person
{
public:
    int *m_Age;
    Person(int age)
    {
        m_Age = new int(age);
    }

    // 析构函数
    ~Person()
    {
        if (m_Age != NULL)
        {
            delete m_Age;
            m_Age = NULL;
        }
    }

    // 重载 赋值运算符
    Person &operator=(Person &p)
    {
        // m_Age=p.m_Age; // 浅拷贝 导致析构双重释放崩溃
        // *m_Age = *p.m_Age; // 深拷贝 写法1

        // p2本身有个20的值需 判断后是否有值,有的话释放掉
        if (m_Age != NULL)
        {
            delete m_Age;
            m_Age = NULL;
        }
        m_Age = new int(*p.m_Age); // 深拷贝 写法2

        // 返回
        return *this;
    }
};

void test01()
{
    Person p1(18);
    Person p2(20);
    Person p3(30);

    p3 = p2 = p1; // 报错

    // p2 = p1; // 赋值运算符  浅拷贝 导致析构双重释放崩溃

    cout << "p1的年龄为:" << *p1.m_Age << endl;
    cout << "p2的年龄为:" << *p2.m_Age << endl;
    cout << "p3的年龄为:" << *p3.m_Age << endl;
}

int main()
{
    test01();

    // int a = 10;
    // int b = 20;
    // int c = 30;

    // c = b = a; // 链式赋值

    // cout << "a=" << a << endl;
    // cout << "b=" << b << endl;
    // cout << "c=" << c << endl;

    return 0;
}