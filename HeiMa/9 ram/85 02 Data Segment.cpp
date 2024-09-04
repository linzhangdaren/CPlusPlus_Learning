#include <iostream>
#include <cstdint> // 包含 uintptr_t
using namespace std;

// 全局变量
int g_a = 10;
int g_b = 10;
// const 全局常量
const int c_g_a = 10;
const int c_g_b = 10;

int main()
{
    // 普通局部变量
    int a = 10;
    int b = 10;
    cout << "a的地址（十进制）：" << dec << reinterpret_cast<uintptr_t>(&a) << endl;
    cout << "b的地址（十进制）：" << dec << reinterpret_cast<uintptr_t>(&b) << endl;
    // 不能用(int)&a,是因为电脑位数不同，int的位数也不同，所以不能用int来表示地址

    // 全局变量的地址
    cout << "g_a的地址（十进制）：" << dec << reinterpret_cast<uintptr_t>(&g_a) << endl;
    cout << "g_b的地址（十进制）：" << dec << reinterpret_cast<uintptr_t>(&g_b) << endl;

    // 静态变量 和全局在一块
    static int s_a = 10;
    static int s_b = 10;
    cout << "s_a的地址（十进制）：" << dec << reinterpret_cast<uintptr_t>(&s_a) << endl;
    cout << "s_b的地址（十进制）：" << dec << reinterpret_cast<uintptr_t>(&s_b) << endl;

    // 常量  分为字符串常量和const
    // 字符串常量(引号里面的都是字符串常量)
    cout << "字符串常量（十进制）：" << dec << reinterpret_cast<uintptr_t>("hello world") << endl;
    // const 分为 const 全局常量和局部常量 ，const局部常量在栈上，const全局常量在常量区
    // const 全局常量
       return 0;
}