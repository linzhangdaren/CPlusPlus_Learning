#include <iostream>
using namespace std;
// 拷贝构造函数 调用时机
// 1.使用一个已经创建完毕的对象来初始化一个新对象
// 2.值传递的方式给函数参数传值
// 3.以值方式返回局部对象

class Person
{
public:
    Person() // 默认构造函数
    {
        cout << "Person默认构造函数调用" << endl;
    }
    Person(int age) // 有参构造函数
    {
        m_Age = age;
    }
    Person(const Person &p) // 拷贝构造函数
    {
        m_Age = p.m_Age;
    }
    // 析构函数
    ~Person()
    {
        cout << "Person析构函数调用" << endl;
    }

    int m_Age;
};

int main()
{
    cout << "Hello World!" << endl;

    system("pause");
    return 0;
}