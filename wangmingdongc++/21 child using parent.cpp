#include <iostream>
using namespace std;
// 继承类 使用父类的成员和方法
// derived class (child) 派生类 子类
// base class (parent) 基类 父类

class Parent
{
public:
    int ParentAge;
    void parent()
    {
        cout << "我是父类" << endl;
    }
};

class Child : public Parent
{
public:
    void child()
    {
        cout << "我是子类" << endl;
        this->parent();
    }
    void childChangeParentAge()
    {
        this->ParentAge = 18;
        cout << "父类的年龄是" << this->ParentAge << endl;
    }
};
int main()
{
    class Child a;
    a.child();
    a.childChangeParentAge();
    a.parent();
    return 0;
}