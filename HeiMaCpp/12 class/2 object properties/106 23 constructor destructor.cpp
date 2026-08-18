#include <iostream>
using namespace std;
// 构造函数 析构函数 系统自动调用
// 重写后 用重写的

// 对象的初始化和清理
// 1.构造函数 初始化
class Person
{
public:
    // 构造函数
    Person()
    {
        cout << "Person构造函数的调用" << endl;
    }

    // 2.析构函数 清理
    ~Person() // 没有返回值 不能有参数
    {
        cout << "Person析构函数的调用" << endl;
    }
};

void test01() // 局部变量 栈区自动销毁所以调用析构函数
{
    Person p;
}

int main()
{
    // test01();

    Person p2; // main 中创建对象就看不见析构函数提示
    // 因为析构函数在return 0后调用所以看不见

    return 0;
}