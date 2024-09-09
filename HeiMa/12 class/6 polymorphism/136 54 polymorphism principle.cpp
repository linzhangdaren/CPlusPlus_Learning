#include <iostream>
using namespace std;
// 虚函数 多态原理

class Animal
{
public:
    // 函数前加virtual  类内存空间从1变为4 说明是指针类型

    // 这时Animal类便多出一个vfptr指针(虚函数指针)(虚函数表指针)
    // v=virtual 虚拟
    // f=function 函数
    // ptr=pointer 指针

    // vfptr指向的是一个vftable(虚函数表)
    // v=virtual 虚拟
    // f=function 函数
    // table=table 表

    // vftable(虚函数表)里存放的是虚函数的地址
    // 如:&Animal::speak

    virtual void speak()
    {
        cout << "动物在说话" << endl;
    }
};

class Cat : public Animal
{
public:
    // 虚函数表也会被子类继承 但数据不变 还是父类的 &Animal::speak(除非被重写)
    // 当子类重写父类虚函数,子类虚函数表会换成子类的虚函数地址
    // 不再是父类的&Animal::speak 而是&Cat::speak
    void speak()
    {
        cout << " 猫在说话" << endl;
    }
};

// 主函数
int main()
{

    return 0;
}