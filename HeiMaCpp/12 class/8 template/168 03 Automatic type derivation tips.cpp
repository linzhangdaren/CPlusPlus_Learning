#include <iostream>
using namespace std;
// 自动类型推导 注意事项 Automatic type derivation

// 1.必须推导出一致的数据类型T才可以使用
template <typename T>
void mySwap(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}
// 2.模板必须要确定出T的数据类型才可以使用
template <class T>
void func() // 空的无法调用
// 编译器无法自动推导这样的空类型,需要在调用时指定数据类型
{
    cout << "func调用" << endl;
}

// 1.必须推导出一致的数据类型T才可以使用
void test01()
{
    int a = 10;
    int b = 20;
    char c = 'c';
    // mySwap(a, b);//正确，推导出两个一致的int类型
    // mySwap(a, c); // 错误，推导出两个类型int和char类型不一致

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
}

// 主函数
int main()
{
    test01();

    // func(); // 错误，无法推导出一致的T类型
    func<int>(); // 正确，指定了T类型为int
    return 0;
}