#include <iostream>
using namespace std;
// 构造函数重载

class A
{
public:
    A()
    {
        cout << "A()" << endl;
    }
    A(int a)
    {
        cout << "A(int a)" << endl;
    }
};

int main()
{
    // class A a();//这个空值系统会默认为函数声明，而不是类声明
    class A a; // 不能带括号

    class A a1(1);

    return 0;
}