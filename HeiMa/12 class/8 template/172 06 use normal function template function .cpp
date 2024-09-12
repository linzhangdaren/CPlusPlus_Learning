#include <iostream>
using namespace std;
// 普通函数和函数模板调用规则
// 1. 如果函数模板和普通函数都可以实现，优先调用普通函数
// 2. 可以通过空模板参数列表来强制调用函数模板
// 3. 函数模板也可以发生重载
// 4. 如果函数模板可以产生更好的匹配，优先调用函数模板

// 1.优先调用普通函数
void myPrint(int a, int b)
{
    cout << "调用的普通函数" << endl;
}

// 函数模板
template <class T>
void myPrint(T a, T b) // 函数模板和普通函数重载
{
    cout << "调用的函数模板" << endl;
}

// 3.函数模板重载
template <class T>
void myPrint(T a, T b, T c) // 多了T c 函数模板重载
{
    cout << "调用的重载函数模板" << endl;
}

// 1.优先调用普通函数
void test01()
{
    int a = 10;
    int b = 20;
    myPrint(a, b); // 优先调用普通函数
}

// 2.可以通过空模板参数列表来强制调用函数模板
void test02()
{
    int a = 10;
    int b = 20;
    myPrint<>(a, b); // 空模板参数列表 强制调用函数模板
}

// 3.调用函数模板重载
void test03()
{
    int a = 10;
    int b = 20;
    int c = 30;
    myPrint(a, b, c); // 调用函数模板重载
}

// 4.如果函数模板可以产生更好的匹配，优先调用函数模板
void test04()
{
    // 虽然void myPrint(int a, int b)也可以调用
    // 但是还得隐式转换，所以优先调用不用转换的函数模板
    char a = 'a';
    char b = 'b';
}

// 主函数
int main()
{
    test01(); // 1普通函数
    test02(); // 2函数模板
    test03(); // 3函数模板重载
    test04(); // 4函数模板

    return 0;
}