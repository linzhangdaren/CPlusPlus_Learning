#include <iostream>
using namespace std;
// 比较两个数字的大小,返回最大值

int Max(int a, int b); // 函数声明

int Max(int a, int b)
{
    return a > b ? a : b; // 三元运算符
}

int main()
{
    cout << "需要您输入两个整数才能比大小";
    cout << endl;
    cout << "请输入第一个整数后按回车键:";
    int a, b;
    cin >> a;
    cout << "请输入第二个整数后按回车键:";
    cin >> b;
    cout << "最大的数字是:";
    cout << Max(a, b);

    return 0;
}