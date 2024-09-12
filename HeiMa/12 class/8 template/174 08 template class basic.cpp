#include <iostream>
#include <string>
using namespace std;
// 模板类 基本语法 和函数模板差不多

template <class NameType, class AgeType> // 俩类型参数
class Person
{
public:
    // 成员变量
    NameType m_Name;
    AgeType m_Age;
    // 构造函数
    Person(NameType name, AgeType age)
    {
        this->m_Name = name;
        this->m_Age = age;
    }
    // 成员函数
    // 输出成员变量
    void showPerson()
    {
        cout << "姓名: " << this->m_Name
             << " 年龄: " << this->m_Age << endl;
    }
};

// 模板类函数
// 只要加上<类型>就行了
void test01()
{
    Person<string, int> p1("Tom", 18);
    p1.showPerson();
}

// 主函数
int main()
{
    test01();

    return 0;
}