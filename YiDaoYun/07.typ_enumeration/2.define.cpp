#include <iostream>
using namespace std;

// 自定义变量名字 
//1.#define
#define Zph int // #define 自定义名字 要替换的变量类型

//2.typedef 老式的用法
// typedef int Zph; // typedef 自定义名字 要替换的变量类型

//3.using 新式的用法
// using Zph = int; // using 自定义名字 要替换的变量类型


int main()
{
    int a = 10;
    Zph b = 20; // 调用自定义变量名字

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    cout << Zph(3.14) << endl;

    return 0;
}
