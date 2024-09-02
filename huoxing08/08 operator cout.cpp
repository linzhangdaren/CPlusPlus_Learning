#include <iostream>
using namespace std;
// 左移运算符

class A
{
public:
    int Num1 = 1;
    int Num2 = 2;
    int Num3 = 3;
};

ostream &operator<<(ostream &os, A &a); // 函数声明
ostream &operator<<(ostream &os, A &a)
{
    os << a.Num1 << endl;
    os << a.Num2 << endl;
    os << a.Num3 << endl;
    return os;
}
int main()
{
    A a;
    cout << a;

    return 0;
}
