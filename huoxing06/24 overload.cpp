#include <iostream>
using namespace std;
// 重载函数 比大小案例
int Max(int A, int B) // 整数函数入口
{
    return A > B ? A : B;
}

float Max(float A, float B) // 浮点数函数入口
{
    return A > B ? A : B;
}

int main()
{
    cout << "直接输出字面量" << Max(1.2f, 2.1f) << endl; // 不加f会报错机器不识别,int不用带因为系统默认就是int类型

    float a = 4.4;
    float b = 5.5;
    cout << "定义a,b后传值" << Max(a, b) << endl;

    return 0;
}