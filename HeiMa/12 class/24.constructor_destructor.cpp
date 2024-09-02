// 构造函数和析构函数
#include <iostream>
using namespace std;
class Person
{
public:
    // 有无参构造函数，有无参析构函数
    Person() // 无参构造函数
    {
        cout << "Person的构造函数调用" << endl;
    }

    Person(int a) // 有参构造函数
    {
        age = a;
        cout << "Person的有参构造函数调用" << endl;
    }
    // 拷贝构造函数
    Person(const Person &p) // 拷贝构造函数 把Person对象p的属性拷贝给当前对象
    {
        cout << "Person的拷贝构造函数调用" << endl;
        age = p.age;
    }

    // 析构函数
    ~Person()
    {
        cout << "Person的析构函数的调用" << endl;
    }
    int age;
};

// 调用
void test01()
{
    // 括号法
    Person p1;     // 默认析构函数调用 注:不能加括号:Person p1()编译器会认为是函数声明
    Person p2(10); // 有参构造函数调用 调用的是有参构造函数Person(int a)
    Person p3(p2); // 拷贝构造函数调用 调用的是拷贝构造函数Person
    cout << "p2的年龄为:" << p2.age << endl;
    cout << "p3的年龄为:" << p3.age << endl;

    // // 显示法
    // Person p1;              // 默认构造函数调用
    // Person p2 = Person(10); // 有参构造函数调用 调用的是有参构造函数Person(int a)
    // Person p3 = Person(p2); // 拷贝构造函数调用 调用的是拷贝构造函数Person
    // Person(10);             // 匿名对象 调用的是有参构造函数Person 调用完立即收回

    // // 错误示范:利用拷贝构造函数创建匿名对象,编译器会认为Person(10)是一个函数声明
    // // Person(p3); 系统会自动去掉小括号:Person p3 已经定义过一个p3了所以提示错误

    // // 隐式转换发
    // Person p4 = 10; // 相当于Person p4 = Person(10); 调用的是有参构造函数Person(int a)
    // Person p5 = p4; // 相当于Person p5 = Person(p4); 调用的是拷贝构造函数Person
}

// 主函数
int main()
{
    test01();

    system("pause");
    return 0;
}