#include <iostream>
using namespace std;
// 重载运算符 increment ++

class MyInteger
{
    // 友元+重载运算符
    friend ostream &operator<<(ostream &cout, MyInteger myint);

public:
    MyInteger()
    {
        m_Num = 0;
    }

    // 重载++运算符 (前置)(后置)
    // 前置
    MyInteger &operator++()
    {
        m_Num++;
        return *this;
    }
    // 后置 返回值不作为重载条件和前置函数撞衫了,参数加一个int
    MyInteger operator++(int) // int是占位参数 不能引用因为是临时temp
    {
        // 先 记录结果
        MyInteger temp = *this;
        // 后 递增
        m_Num++;
        // 最后将记录结果返回
        return temp;
    }

private:
    int m_Num;
};
// 重载左运算符
ostream &operator<<(ostream &cout, MyInteger myint)
{
    cout << myint.m_Num;
    return cout;
}

void test01()
{
    MyInteger myint;         //
    cout << ++myint << endl; // 1
    cout << myint << endl;   // 1
}

void test02()
{
    MyInteger myint;
    cout << myint++ << endl; // 0
    cout << myint << endl;   // 1
}

int main()
{
    test01();
    test02();
    return 0;
}