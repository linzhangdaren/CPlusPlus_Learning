// 继承
// 构造函数不继承，但子类会调用父类的构造函数
// 先调用父类的构造函数，再调用子类的构造函数
// 析构函数也不继承，但子类会调用父类的析构函数
// 先调用子类的析构函数，再调用父类的析构函数

// 在虚幻引擎中尽量不用继承,因为虚幻会把所有父类的东西用到用不到的全给子类
// 导致代码臃肿,一般用组件来解决继承的问题
#include <iostream>
#include <string>
using namespace std;

class A
{
public:
    string name;
};

class B : public A
{
public:
    // name = 0;//错误,name是A类的成员变量,不能在B类中定义
    // 那在b中如何使用name呢? 用this->name
    B(string name)
    {
        this->name = name;
        cout << "B的构造函数" << endl;
    }
};

int main()
{

    return 0;
}