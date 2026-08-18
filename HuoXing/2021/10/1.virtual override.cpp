// 多态发生在继承的条件下 重写 override
// 在继承关系中,子类重写父类的虚函数
// 子类可以实现自己的功能,同时继承父类的功能,同时也能调用父类的同名函数

// 如果子类中 有 virtual 和 override 关键字，那叫 重写（override）；
//     如果 没有，那就是 重定义（redefine）

// 重写 就是你爸说了一句话，你用自己的方式再说一遍，别人问你问题的时候，你也能代表你爸回答。
// 👉 用的是 virtual 和 override，实现多态。

//     重定义 就是你把你爸说的话屏蔽了，你自己重新说了一遍，但你不能代表你爸说话。
// 👉 父类和子类都有同名函数，但不加 virtual，调用谁取决于你声明的类型。

class Animal
{
public:
    virtual void Say() // 代表虚函数 多态的话父类必须是虚函数
    {
        cout << "父类的说话" << endl;
    };
};

class Dog : public Animal
{
public:
    virtual void Say() override // 有 virtual 和 override 关键字，那叫 重写（override）
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