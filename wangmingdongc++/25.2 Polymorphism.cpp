#include <iostream>
using namespace std;
// 动态多态的必要条件: (静态多态和重载一样 动态多态才是真正的多态) 编译时确定不了运行时才能确定调用哪个函数
// 1. 有继承关系
// 2. 子类重写父类中的虚函数
// 3. 父类指针指向子类对象
// 4. 使用父类指针调用虚函数

// 父类指针指向子类对象需要再父类函数前使用virtual关键字

class Father
{
public:
    virtual void show() // 不加这个关键字的话父类指针指向子类对象，调用的还是父类的函数
    {
        cout << "这是父类" << endl;
    }
};

class Children : public Father
{
public:
    virtual void show()
    {
        cout << "这是子类" << endl;
    }
};

// 主函数
int main()
{
    class Father *father = new Father(); // 父类指针指向父类对象
    father->show();

    class Children *children = new Children(); // 父类指针指向子类对象
    children->show();

    class Father *p = new Children(); // 父类指针指向子类对象
    // 按道理来讲这里父类指向调用的应该是子类的函数，但是没有加virtual关键字，所以调用的还是父类的函数
    p->show(); // 父类指针指向子类对象，需要在父类函数前使用virtual关键字，才能实现动态多态

    // 子类指针指向父类
    // class Children *c = new Father(); // 子类指针指向父类对象，这里会报错，因为子类指针只能指向子类对象

    return 0;
}