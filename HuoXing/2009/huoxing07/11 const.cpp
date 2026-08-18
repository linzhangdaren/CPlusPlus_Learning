#include <iostream>
using namespace std;
// const 保护的意思
// 声明时必须要赋值

// 变量转常量无法修改

int a = 10; // 全局变量
// a=20;//文件域 能声明不能逻辑赋值语句

int main()
{
    const int a = 10; // 这种写法最正规
    int const b = 20; // 以上两种写法都可以,不建议用第二种! 因为指针前后有区别怕混淆

    // 关于指针
    const int *a1 = new int(0); // 内容不能改，地址可以改
    // int const *a2 = new int(0); // 内容不能改，地址可以改 ,不建议这种写法 只用滴1和3种
    int *const a3 = new int(0); // 内容可以改，地址不能改 无法被取地址和引用

    const int *const a4 = new int(0); // 内容不能改，地址不能改

    return 0;
}