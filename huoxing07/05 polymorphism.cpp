#include <iostream>
using namespace std;

// polymorphism 多态
// 函数前面需要加上virtual虚函数，意思是这个函数可以被子类重写,才能实现多态

class Animal
{
public:
    virtual void Say() // 虚函数，可以被重写
    {
        cout << "我是父类 动物" << endl;
    }
};

class Dog : public Animal
{
public:
    virtual void Say() override // 重写父类的虚函数
    {
        cout << "我是子类 狗" << endl;
    }
};

class Cat : public Animal
{
public:
    virtual void Say() override // 重写父类的虚函数
    {
        cout << "我是子类 猫" << endl;
    }
};

int main()
{

    Animal *dog = new Dog(); // 父类指针指向子类 ,但子类不能调用父类的函数
    dog->Say();              // 调用dog对象的Say()函数

    Animal *cat = new Cat();
    cat->Say();

    return 0;
}