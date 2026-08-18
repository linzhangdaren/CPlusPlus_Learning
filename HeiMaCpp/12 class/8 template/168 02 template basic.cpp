#include <iostream>
using namespace std;
// 模板 template <typename T> 1.函数模板 2.类模板
// template 声明创建模板 (类似class)
// typename 类型参数 写class也行一般类模板用class较多(类似int)
// T 模板参数占位符通用数据类型(类似变量a)
// 1.函数模板 调佣的方式有两种: 1.自动类型推导 2.显示指定类型

// 交换两个整型的函数
void swapInt(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
// 交换两个浮点型的函数
void swapDouble(double &a, double &b)
{
    double temp = a;
    a = b;
    b = temp;
}

// 由于以上两个函数逻辑相同类型不同，所以可以使用函数模板:
template <typename T>
void mySwap(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}

// 1.自动类型推导: mySwap(a, b);
void test01()
{
    int a = 10;
    int b = 20;
    mySwap(a, b);
    // 自动类型推导 让编译器自动推导出T的类型
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
}
// 2.显示指定类型:mySwap<int>(a, b);
void test02()
{
    int a = 10;
    int b = 20;
    mySwap<int>(a, b);
    // 显示指定类型 多了<int>直接告诉编译器类型
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
}

// 主函数
int main()
{

    return 0;
}