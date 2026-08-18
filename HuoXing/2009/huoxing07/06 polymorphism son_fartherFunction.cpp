#include <iostream>
using namespace std;
// 子类调用父类虚函数

class Animal
{
public:
    virtual void Say()
    {
        cout << "我是父类" << endl;
    }
};

class Dog : public Animal
{
public:
    virtual void Say() override
    {
        cout << "我是子类 狗" << endl;
        Animal::Say(); // 调用父类函数
    }
};

int main()
{
    Animal *dog = new Dog();
    dog->Say();

    // //可以这样写:
    // Dog dog;
    // dog.Say();
    return 0;
}