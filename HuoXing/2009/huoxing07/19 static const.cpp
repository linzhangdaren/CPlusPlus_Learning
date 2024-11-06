#include <iostream>
using namespace std;
// 静态全局常量

// static const int a = 10; //必须赋值 使用这一种 以下都对
// const static int a = 10; 
// static int const a = 10;

// 静态局部变量：函数内部定义的静态变量

void Say()
{
    static int TM = 0; // 程序执行时，只初始化一次，函数再次被调用时，不会重新初始化
    TM++;              // 每次调用函数时，都会对TM进行累加如果没有static 每次调用此函数TM都会被初始化为0
    cout << "TM = " << TM << endl;
}

int main()
{
    for (int i = 0; i < 10; i++)
    {
        Say();
    }

    return 0;
}