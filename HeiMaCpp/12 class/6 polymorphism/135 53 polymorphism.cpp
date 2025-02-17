#include <iostream>
using namespace std;
// 多态性 Polymorphism //需要虚函数支持 virtual
// 为了实现父类指针指向子类对象，访问子类的成员
//满足条件:
// 1. 有继承关系
// 2. 子类重写父类中的虚函数


// 多态分为两类
// 静态多态：函数重载，运算符重载(已学)//函数已经确定 编译阶段确定函数地址
// 动态多态：继承 + 虚函数//函数地址在运行阶段确定

class Animal
{
public:
    virtual void speak() // 虚函数
    {
        cout << "动物在说话" << endl;
    }
};

class Cat : public Animal
{
public:
    void speak()
    {
        cout << " 猫在说话" << endl;
    }
};

class Dog : public Animal
{
public:
    void speak()
    {
        cout << " 狗在说话" << endl;
    }
};

// 执行说话的函数
// 父类指向子类对象 父类函数前加virtual关键字 不然调的仍是父类的speak
void doSpeak(Animal &animal) // 相当于Animal & animal = cat;
{
    animal.speak();
}

void test01()
{
    Cat cat;
    doSpeak(cat);
}

// 主函数
int main()
{
    test01();

    return 0;
}