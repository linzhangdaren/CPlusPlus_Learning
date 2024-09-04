#include <iostream>
using namespace std;
// 函数名相同 参数列表不同

void func() // 空函数
{
    cout << "func()" << endl;
}

void func(int a) // 参数为int
{
    cout << "func(int a)" << endl;
}

void func(double a) // 参数为double
{
    cout << "func(double a)" << endl;
}

// 返回值不能作为函数重载的条件
//  int func(double a) // 参数为double 返回值为int
//  {
//      cout << "func(double a)" << endl;
//  }

int main()
{
    func();
    func(1);
    func(1.1);
    
    return 0;
}