// if中 常见的错误
#include <iostream>
using namespace std;

int main()
{
    // 分号
    // 多加一个分号会导致即使判断错误，也会执行下面的代码
    if (0);
    {
        cout << "0" << endl;
    }

    //==号
    // 应该使用== 是判断不是赋值=号
    //把数值放在前面1==a如果写错1=a编译器也会提示报错
    int a = 1;
    if (a = 1)
    {
        cout << "a=1" << endl;
    }
    return 0;
}
