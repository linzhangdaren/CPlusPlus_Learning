#include <iostream>
using namespace std;
#include <string>
// 计算器 calculator 案例 多态的运用

// 多态抽象写法 组织结构清晰

class AbstractCalculator // 抽象计算器类
{
public:
    // 成员变量
    int m_num1;
    int m_num2;
    // 成员虚函数
    virtual int getResult()
    // 父类中的虚函数 一般无意义主要是为了子类重写
    {
        return 0;
    }
    // 可以直接写成virtual int getResult() = 0; // 纯虚函数
};

// 实现加法计算器类
class AddCalculator : public AbstractCalculator
{
public:
    int getResult()
    {
        return m_num1 + m_num2;
    }
};

// 实现减法计算器类
class SubCalculator : public AbstractCalculator
{
public:
    int getResult()
    {
        return m_num1 - m_num2;
    }
};

// 实现乘法计算器类
class MulCalculator : public AbstractCalculator
{
public:
    int getResult()
    {
        return m_num1 * m_num2;
    }
};

// 实现除法计算器类
class DivCalculator : public AbstractCalculator
{
public:
    int getResult()
    {
        return m_num1 / m_num2;
    }
};

void test01()
{
    // 多态使用条件:
    // 父类指针或者引用指向子类对象
    // 加法计算器
    AbstractCalculator *abc = new AddCalculator();
    abc->m_num1 = 10;
    abc->m_num2 = 20;
    cout << abc->m_num1 << "+" << abc->m_num2 << "=" << abc->getResult() << endl;
    delete abc; // 释放内存

    // 减法计算器
    abc = new SubCalculator();
    cout << abc->m_num1 << "-" << abc->m_num2 << "=" << abc->getResult() << endl;
    delete abc; // 释放内存

    // 乘法计算器
    abc = new MulCalculator();
    cout << abc->m_num1 << "*" << abc->m_num2 << "=" << abc->getResult() << endl;
    delete abc; // 释放内存

    // 除法计算器
    abc = new DivCalculator();
    cout << abc->m_num1 << "/" << abc->m_num2 << "=" << abc->getResult() << endl;
    delete abc; // 释放内存
}

int main()
{
    test01();
    return 0;
}