#include <iostream>
using namespace std;
// 继承中的构造函数显示重载
class A
{
public:
    A(int Num); // 有参的构造函数 子类也必须要显示的调用父类的构造函数
};
// 定义构造函数
A::A(int Num)
{
    cout << "class A" << endl;
}
// b类继承a类
class B : public A
{
public:
    B(); // 显示调用父类的构造函数
};
// 定义构造函数
B::B() : A(1) // 父类A里有 有参的构造函数所以这里必须给出参数
{
}
// 主函数
int main()
{
    B b;

    return 0;
}