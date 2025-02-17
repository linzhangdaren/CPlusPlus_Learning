#include <iostream>
using namespace std;
// 常量指针和指针常量
int main()
{
    // 常量指针
    int a = 10;
    int b = 20;
    // const int *p = &a;
    // 指针指向可以改变，指向的值不可以改变
    // p = &b; // 指针指向可以改变
    // *p = 100;//指针指向的值不可以改变

    // 指针常量
    // 指针指向不可以改变，指向的值可以改变
    int *const p = &a;
    // p = &b; // 指针指向不可以改变
    *p = 100;//指针指向的值可以改变

    system("pause");
    return 0;
}