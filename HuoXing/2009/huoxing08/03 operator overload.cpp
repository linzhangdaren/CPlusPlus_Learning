#include <iostream>
using namespace std;

class A
{
public:
    int Num = 0; // 成员变量
    void operator+(int Num);
};

void A::operator+(int Num)
{
    this->Num += Num;
}
// 主函数
int main()
{
    A a;

    a + 10;
    // 10+a;//这种没这种规则，编译器不知道怎么处理
    cout << a.Num << endl;

    return 0;
}
