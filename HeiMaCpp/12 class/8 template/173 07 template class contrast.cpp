#include <iostream>
#include <string>
using namespace std;
// 模板的局限性
// 如果传入的是数组或类就无法处理了
// 此时需要具体化模板

// 对比两个类型数据是否相等
class Person
{
public:
    // 成员变量
    string m_Name;
    int m_Age;

    // 构造函数
    Person(string name, int age)
    {
        this->m_Name = name;
        this->m_Age = age;
    }
};

// 对比两个数据是否相等但无法对比俩类是否相等
// 需要具体化模板才可以对比两个类是否相等
template <class T>
bool compare(T &a, T &b)
{
    if (a == b) // 重载就可以但是现在有更好的办法
    {
        return true;
    }
    else
    {
        return false;
    }
}

// 具体化模板函数实现两个类之间的比较
template <>
bool compare(Person &p1, Person &p2)
{
    if (p1.m_Name == p2.m_Name && p1.m_Age == p2.m_Age)
    {
        return true;
    }
    else
    {
        return false;
    }
}

// 普通类型对比函数
void test01()
{
    int a = 10;
    int b = 20;
    bool ret = compare(a, b); // 传入a和b
    if (ret)                  // 判断ret是否为真
    {
        cout << "a == b" << endl;
    }
    else
    {
        cout << "a != b" << endl;
    }
}

// 自定义Person类，
void test02()
{
    Person p1("Tom", 10);
    Person p2("Jerry", 20);
    bool ret = compare(p1, p2); // 拿去作对比
    if (ret)
    {
        cout << "p1 == p2" << endl;
    }
    else
    {
        cout << "p1 != p2" << endl;
    }
}
// 主函数
int main()
{
    test01();
    test02();

    return 0;
}