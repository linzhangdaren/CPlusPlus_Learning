#include <iostream>
using namespace std;
// 静态成员
// 1 静态成员变量 所有成员共享同一份数据
// 2 编译阶段就分配内存了 程序运行前 全局区
// 3 类内声明 类外初始化 必须有初始值

class Person
{
public:
    // 类内声明:int m_A;
    static int m_A; // 如果卸载private下，则类外无法访问
};
// 类外初始化:int Person::m_A=100;
// 但是这样是全局变量看不出来是Person的成员
int Person::m_A = 100;

void test01()
{
    Person p;
    cout << p.m_A; // 静态成员变量需要类外初始化才能用

    Person p2;
    p2.m_A = 200;
    cout << p.m_A << endl; // 改后的值 用p2对象修改 但还用p输出
}

void test02()
{
    // 静态成员变量 不属于某个对象 所有对象共享同一份数据
    // 所以静态成员变量有两种访问方式

    // 1.通过对象访问
    // Person p;
    // cout << p.m_A << endl;
    // 2.通过类名访问
    // 可以不创建对象直接访问 因为不属于任何对象
    cout << Person::m_A << endl;
}
// 主函数
int main()
{
    // test01();
    test02();
    return 0;
}