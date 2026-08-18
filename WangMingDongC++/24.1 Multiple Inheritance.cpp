#include <iostream>
using namespace std;
// Multiple Inheritance 多重继承
// 一个子类继承了多个父类
// 此案例 class C 继承了A和B

//多继承可以实现连接多个类的功能
class A
{
public:
    void testA()
    {
        cout << "testA" << endl;
    }
};

class B
{
public:
    void testB()
    {
        cout << "testB" << endl;
    }
};

class C : public A, public B
{
public:
    void testC()
    {
        cout << "testC" << endl;
    }
};

int main()
{
    class C c;
    c.testA();
    c.testB();

    return 0;
}