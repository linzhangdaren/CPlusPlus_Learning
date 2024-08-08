#include <iostream>
using namespace std;
// 堆 heap 人为手动       栈 stack 系统自动
// new开辟的空间在堆区     new返回的地址在栈区
// new int              p

// int *p = new int(); // 在堆区开辟一个int类型空间，返回该空间的地址，并将其赋值给指针p
// new关键词在堆区开辟空间 其在堆区开辟空间的地址返回给指针

// 注意:指针无法操控枚举的枚举项 EColor *color = new EColor(RED); //错误

// 无初始化的指针是乱指会出错所以不能使用 需要NULL初始化:int *p = NULL;或int *p = new int();

int main()
{
    int *p = new int(10); // 在堆区开辟一个int类型空间，并初始化为10，返回该空间的地址，并将其赋值给指针p
    cout << *p << endl;   // 输出10
    delete p;             // 释放指针p指向的堆区空间
    p = NULL;             // 将指针p置为空指针，防止野指针
    return 0;
}