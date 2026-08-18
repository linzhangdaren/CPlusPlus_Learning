#include <iostream>
using namespace std;

// 纯虚函数 virtual 函数 = 0;
// 纯虚函数：在基类中声明的虚函数但没有定义!要求派生类必须定义该函数
// 带有纯虚函数的类叫做抽象类，抽象类不能实例化对象 为了抽象和设计为目的建立的
// 好比：人类不不是具体的人，而是一个抽象的概念
// 继承类必须实现纯虚函数，否则继承类也是抽象类无法实例化对象

// 作为父类要求子类必须把某一函数实现

class Animal
{
public:
    virtual void Say() = 0; // 纯虚函数不需要定义，只需要声明
};

class Dog : public Animal
{
public:
    virtual void Say() override // 重写父类的虚函数
    {
        cout << "我是子类 狗" << endl;
    }
};

int main()
{

    Animal *dog = new Dog();
    dog->Say();

    // Animal *animal = new Animal(); // 抽象类不能实例化对象
    return 0;
}