#include <iostream>
using namespace std;
#include <string>
// 计算器 calculator 案例 多态的运用

// 普通写法
// 1.扩展需要修改源代码
// 2.阅读麻烦 修改麻烦得全部阅读
// 3.提倡开闭原则：对扩展开放，对修改关闭

class Calculator
{
public:
    int m_num1;
    int m_num2;

    int getResult(string oper)
    {
        if (oper == "+")
        {
            return m_num1 + m_num2;
        }
        else if (oper == "-")
        {
            return m_num1 - m_num2;
        }
        else if (oper == "*")
        {
            return m_num1 * m_num2;
        }
        else if (oper == "/")
        {
            return m_num1 / m_num2;
        }
    }
};

void test01()
{
    Calculator c;
    c.m_num1 = 10;
    c.m_num2 = 10;

    cout << c.m_num1 << "+" << c.m_num2 << "=" << c.getResult("+") << endl;
    cout << c.m_num1 << "-" << c.m_num2 << "=" << c.getResult("-") << endl;
    cout << c.m_num1 << "*" << c.m_num2 << "=" << c.getResult("*") << endl;
    cout << c.m_num1 << "/" << c.m_num2 << "=" << c.getResult("/") << endl;
}

int main()
{

    return 0;
}