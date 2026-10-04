// 弱化数据的类型
// 类似函数传的是参数 ，模板传的是数据类型
// Print<int>(5) ,函数名+传类型<int>+传实参(5)

#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

// 定义一个函数模板
template <typename T> // typename也可以写成class T代表各种数据类型 传啥都可以
void Print(T value)
{
    cout << value << endl;
}

int main()
{
    // 防止中文乱码
    system("chcp 65001");

    // 使用函数模板
    Print(5);       // 完成写法展现类型 Print<int>(5);
    Print("你好!"); // 完成写法展现类型 Print<string>("你好!");
    Print(3.14);    // 完成写法展现类型 Print<double>(3.14);

    return 0;
}