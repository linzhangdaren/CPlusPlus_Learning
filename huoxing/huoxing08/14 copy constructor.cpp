#include <iostream>
using namespace std;
// 拷贝构造函数

// 聚合类:没有构造函数,没有拷贝构造函数,没有析构函数,没有赋值运算符重载,没有私有成员变量,结构体,联合

class Person
{
public:
    // 成员变量
    int age;
    Person()
    {
        cout << "构造函数Person()" << endl;
    }
    Person(Person &)
    {
        cout << "拷贝构造函数Person(Person &)" << endl;
    }
};

void test01()
{
    Person p1;
    p1.age = 10;

    Person p2 = p1;                        // 只会通过拷贝构造函数来创建p2 不会调用构造函数
    cout << "p2.age = " << p2.age << endl; // 不会输出10,因为拷贝构造函数没有对p2.age进行赋值
}

int main()
{
    test01();

    return 0;
}