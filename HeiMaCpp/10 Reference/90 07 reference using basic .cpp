#include <iostream>
using namespace std;
// 引用 使用规则
// 1.引用必须初始化
// 2.引用在初始化后，不可以改变
int main()
{
    int a = 10;
    int b = 20;
    // int &c;//引用必须初始化 错误
    int &c = a;
    // int &c = b; // 引用在初始化后，不可以改变
    return 0;
}