#include <iostream>
using namespace std;
// 纯虚函数 Pure Virtual Function
// 父类的虚函数没意义只是为了给子类一个规范也就是重写
// 所以可以把虚函数改为纯虚函数:virtual 返回值类型 函数名(参数列表) = 0;

// 抽象类 Abstract Class(有纯虚函数的类就叫抽象类)
// 1.抽象类不能实例化对象
// 2.抽象类的子类必须重写抽象类中的纯虚函数，否则也属于抽象类

class Base
{
public:
    // 纯虚函数
    virtual void func() = 0;
    // Base为抽象两类 无法实例化对象
};

class Son : public Base
{
public:
    // 什么叫重写?子类重新定义父类的虚函数

    void func() // 哪怕函数内容是空的只要写了就是重写
    {
        cout << "Son func()" << endl;
    }
};

void test01()
{ // 堆栈都不可以实例化对象 就是纯粹为了子类重写
  //  Base b;//报错 抽象类无法实例化对象
  //  new Base;//报错 抽象类无法实例化对象
}

void test02()
{
    class Base *p = new Son; // 指针可以指向子类对象
    p->func();
}

// 主函数
int main()
{
    test02();
    return 0;
}