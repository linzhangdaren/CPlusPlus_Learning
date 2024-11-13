// 多态 重写 override
// 在继承关系中,子类重写父类的虚函数
// 子类可以实现自己的功能,同时继承父类的功能,同时也能调用父类的同名函数

class Animal
{
public:
    virtual void Say()
    {
        cout << "父类的说话" << endl;
    };
};

class Dog : public Animal
{
public:
    virtual void Say() override // 没有virtual和override关键字,是重定义
    {
        cout << "子类狗的说话" << endl;
    }
};

#include <iostream>
using namespace std;

int main()
{
    Dog dog;
    dog.Say(); // 调用子类的重写函数

    return 0;
}