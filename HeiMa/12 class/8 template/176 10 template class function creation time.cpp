#include <iostream>
using namespace std;
// 模板类中成员函数的创建时机
// 普通类成员函数一开始就可以创建
// 模板类成员函数在调用时才创建 因为不确定传入的类型

// 普通类1
class Person1
{
public:
    void showPerson1()
    {
        cout << "Person1 showPerson1" << endl;
    }
};

// 普通类2
class Person2
{
public:
    void showPerson2()
    {
        cout << "Person2 showPerson2" << endl;
    }
};

// 模板类
template <class T>
class MyClass
{
public:
    // 模板类的成员函数
    T obj; // 相当于Person1 obj;类的嵌套
    // 模板类的成员函数
    void func1()
    {
        obj.showPerson1();
    }
    void func2()
    {
        obj.showPerson2();
    }
};

// 调用函数
void test()
{
    MyClass<Person1> m1;
    m1.func1();
    MyClass<Person2> m2;
    m2.func2();
}

// 主函数
int main()
{
    test();
    return 0;
}