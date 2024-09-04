#include <iostream>
using namespace std;
// 引用做函数的返回值
// 1. 不要返回局部变量的引用
int &test01()
{
    int a = 10; // 栈区 自动释放
    return a;
}
// 2. 函数的调用可以作为左值
int &test02()
{
    static int a = 10; // 静态变量 全局区
    return a;
}

int main()
{
    // 不要返回局部变量的引用
    //  int &ref = test01();
    //  cout << "ref = " << ref << endl;

    // 加上关键字static后，引用可以返回局部变量
    int &ref2 = test02();
    cout << "ref2 = " << ref2 << endl;
    // 作为左值使用
    test02() = 1000;
    cout << "ref2 = " << ref2 << endl;

    return 0;
}