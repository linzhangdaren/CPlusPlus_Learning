#include <iostream>
using namespace std;
// 类和结构体最大的区别在于默认的访问权限
// 类默认的访问权限是private(私有),还有protected(保护)和public(公有)
// 结构体默认的访问权限是public(公有)
// 所以如果不公开public 那么创建相应的对象时无法访问

// private: 私有成员,只能在当前类中访问
// protected: 保护成员,只能在当前类和子类中访问
// public: 公有成员,可以在任何地方访问

class Animal
{
    // public: // 默认是private,所以需要手动声明public这样修改对象才不会报错
    int Age;
};

int main()
{
    Animal a;
    a.Age = 1; // 类默认权限是private,所以无法访问对象Age,需要在类中声明public
    return 0;
}