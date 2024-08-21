#include <iostream>
using namespace std;
// Initializer List
// 初始化列表
//子类的构造函数会自动调用父类的构造函数
class A
{
public:
    int a;
    int b;
    // 构造函数初始化class成员变量
    //  A(int a, int b)
    //  {
    //      this->a = a;
    //      this->b = b;
    //  }
    

    A(int a, int b) : a(a), b(b) {}
};

int main()
{
    class A a(1, 2);
    return 0;
}
