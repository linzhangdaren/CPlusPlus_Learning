#include <iostream>
#include <string>
using namespace std;
// 类模板做函数的参数
// 1.指定传入类型 (直接显示对象的类型)
// 2.参数化模板 (将对象中的参数变为模板参数传入)
// 3.整个类模板参数化 (将对象类型模板化进行传递)

// 类模板
template <class T1, class T2>
class Person
{
public:
    // 成员变量
    T1 m_Name;
    T2 m_Age;
    // 构造函数
    Person(T1 name, T2 age)
    {
        this->m_Name = name;
        this->m_Age = age;
    }
    // 成员函数
    void showPerson()
    {
        cout << "姓名：" << this->m_Name
             << " 年龄：" << this->m_Age << endl;
    }
};

// 1.指定传入类型 (直接,不用创建模板)
void PrintPerson(Person<string, int> &p) // 传入模板类 当做做参数
{
    p.showPerson();
}
void test01()
{
    Person<string, int> p1("张三", 20);
    PrintPerson(p1);
}

// 2.参数化模板
template <class T1, class T2> // 模板参数化
void printPerson2(Person<T1, T2> &p)
{
    p.showPerson();
    // 如何查看T1 T2的类型?
    // cout << "T1的类型为：" << typeid(T1).name() << endl;
    // cout << "T2的类型为：" << typeid(T2).name() << endl;
}
void test02()
{
    Person<string, int> p("猪八戒", 100);
    printPerson2(p);
}

// 3.整个类模板参数化
template <class T>
void printPerson3(T &p)
{
    p.showPerson();
}
void test03()
{
    Person<string, int> p("唐僧", 30);
    printPerson3(p);
}

// 主函数
int main()
{
    test01();
    test02();
    test03();

    return 0;
}