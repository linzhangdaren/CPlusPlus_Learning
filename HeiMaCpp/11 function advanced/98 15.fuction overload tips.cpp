#include <iostream>
using namespace std;
// 函数重载的注意事项

// 1.引用作为重载的条件,const可以作用于重载
void func(int &a)
{
    cout << "func(int &a)调用" << endl;
}

void func(const int &a)
{
    cout << "func(const int &a)调用" << endl;
}

// 2.函数重载碰到默认函数
void func2(int a, int b = 10)
{
    cout << "func2(int a)调用" << endl;
}

void func2(int a)
{
    cout << "func2(int a)调用" << endl;
}

int main()
{
    int a = 10;
    func(a);  // 调用func(int &a)
    func(10); // 调用func(const int &a)
    // 默认值函数重载的注意事项
    // func2(10); // 产生二义性了 int a, int b = 10这里的b有默认值也可以被调用

    return 0;
}