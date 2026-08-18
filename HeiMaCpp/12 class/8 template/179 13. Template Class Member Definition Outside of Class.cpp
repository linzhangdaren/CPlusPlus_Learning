#include <iostream>
#include <string>
using namespace std;
// 类模板成员函数类外实现

template <class T1, class T2>
class Person
{
public:
    // 成员变量
    T1 m_Name;
    T2 m_Age;

    // 构造函数
    Person(T1 name, T2 age);
    // {
    //     this->m_Name = name;
    //     this->m_Age = age;
    // }

    // 成员函数
    void showPerson();
    // {
    //     cout << "姓名:" << this->m_Name << " 年龄:" << this->m_Age << endl;
    // }
};
// 类 构造函数的类外实现
template <class T1, class T2>
Person<T1, T2>::Person(T1 name, T2 age) // 如果不加T1 T2就是普通的Person不是类模板的实现
{
    this->m_Name = name;
    this->m_Age = age;
}
// 类 成员函数的类外实现
template <class T1, class T2>
void Person<T1, T2>::showPerson()
{
    cout << "姓名:" << this->m_Name << " 年龄:" << this->m_Age << endl;
}

// 调用
void test01()
{
    Person<string, int> p("Tom", 20);
    p.showPerson();
}
// 主函数
int main()
{
    test01();

    return 0;
}