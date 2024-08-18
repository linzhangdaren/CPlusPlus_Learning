#include <iostream>
using namespace std;
// 继承
// derived class (child) 派生类 子类
// base class (parent) 基类 父类
// 继承的作用是 少写重复的代码 子类可以直接使用父类的东西
class Base // 父类 基类
{
public:
    void getHello()
    {
        cout << "hello" << endl;
    }
};

class A : public Base // 子类 派生类
{
public:
    void getA()
    {
        cout << "我是A" << endl;
    }
};

int main()
{
    class A a;
    a.getHello(); // 父类的方法
    a.getA();     // 子类本身自带的方法

    return 0;
}