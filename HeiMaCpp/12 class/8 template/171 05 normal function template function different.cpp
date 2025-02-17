#include <iostream>
using namespace std;
// 普通函数与函数模板的区别
// 1.普通函数调用时可以发生自动类型转换
// 2.函数模板调用时，如果利用自动类型推导，不会发生自动类型转换
// 3.如果要发生自动类型转换，必须使用显示实例化

// 普通函数
int myAdd01(int a, int b)
{
    return a + b;
}

// 函数模板
template <class T>
T myAdd02(T a, T b)
{
    return a + b;
}

// 主函数
int main()
{
    int a = 10;
    int b = 20;
    char c = 'c'; // a 97 c 99
    // 普通函数调用
    cout << myAdd01(a, c) << endl; // 普通函数调用

    // 模板函数调用1.利用自动类型推导
    cout << myAdd02(a, b) << endl;
    // cout << myAdd02(a, c) << endl; // 不会发生自动类型转换

    // 模板函数调用2.利用显示实例化 添加了<int>
    cout << myAdd02<int>(a, c) << endl;

    return 0;
}