#include <iostream>
using namespace std;
// 初始化列表
//用变量abc代替常量123的写法
class Person
{
public:
    // Person(int a, int b, int c)
    // {
    //     m_A = a;
    //     m_B = b;
    //     m_C = c;
    // }
    Person(int a, int b, int c) : m_A(a), m_B(b), m_C(c) {}

    int m_A;
    int m_B;
    int m_C;
};

void test01()
{
    // Person p(10, 20, 30);
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