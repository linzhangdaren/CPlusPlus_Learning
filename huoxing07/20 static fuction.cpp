#include <iostream>
using namespace std;
// 静态函数：函数前加static，函数只在本文件中有效，其他文件无法调用
// 只能操作全局类型数据全局变量;静态全局函数;全局函数;静态全局变量
// 不能操作局部类型数据不能操作级别低于自己的内容

static void Say()
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