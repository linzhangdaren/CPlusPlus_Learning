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
        cout << "Person有参构造函数调用" << endl;
    }
    Person(const Person &p) // 拷贝构造函数
    {
        m_Age = p.m_Age;
        cout << "Person拷贝构造函数调用" << endl;
    }
    // 析构函数
    ~Person()
    {
        cout << "Person析构函数调用" << endl;
    }

    int m_Age;
};

// 1.使用一个已经创建完毕的对象来初始化一个新对象
void test01()
{
    Person p1(20);
    Person p2(p1); // 把p1对象赋值给p2对象
    cout << "p2的年龄为：" << p2.m_Age << endl;
}

// 2.值传递的方式给函数参数传值
void doWork(Person p)
{
}

void test02()
{
    Person p;
    doWork(p); // 把p对象以值传递的方式传给函数参数,拷贝构造函数调用
}

// 3.以值方式返回局部对象
Person doWork2()
{
    Person p1; // 不返回此对象,会拷贝次对象的副本 return的是副本
    cout << &p1 << endl;
    return Person(p1); // 如果return p1,不调用拷贝构造函数
    // 以值方式返回局部对象,拷贝构造函数调用
    // 虽然是局部会被销毁,但是拷贝构造函数会先拷贝到返回值中,再拷贝到调用者中
}

void test03()
{
    Person p = doWork2(); // 以值方式返回局部对象,拷贝构造函数调用
    cout << &p << endl;
}

int main()
{
    // test01();
    test03();

    return 0;
}