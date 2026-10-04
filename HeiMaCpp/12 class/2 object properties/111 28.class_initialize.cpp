#include <iostream>
using namespace std;
// 初始化列表 用:冒号来初始化另一种写法
// class Person
// {
// public:
//     Person(int a, int b, int c)
//     {
//         m_A = a;
//         m_B = b;
//         m_C = c;
//     }

//     int m_A;
//     int m_B;
//     int m_C;
// };

// 用初始化列表 冒号写非常方便
class Person
{
public:
    // Person() : m_A(10), m_B(20), m_C(30) {}//固定值写法
    Person(int a, int b, int c) : m_A(a), m_B(b), m_C(c) {}

    int m_A;
    int m_B;
    int m_C;
};

void test01()
{
    Person p(10, 20, 30);
    cout << "m_A=" << p.m_A << endl;
    cout << "m_B=" << p.m_B << endl;
    cout << "m_C=" << p.m_C << endl;
}

int main()
{
    test01();

    system("pause");
    return 0;
}