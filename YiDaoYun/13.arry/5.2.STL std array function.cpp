// 新式数组的使用2

#include <iostream>
#include <array> // 需要包含 array 的头文件
using namespace std;

int main()
{
    // 定义新式容器数组的基本使用方式
    // std::array<变量类型, 元素数量> 变量名;
    array<int, 3> A{1, 2, 3};
    array<int, 3> B = {1, 2, 3};
    // 比较两个数组是否相等
    // 1.用布尔+三目运算符手算是否相等:
    bool equal = A == B ? 1 : 0;
    cout << "布尔+三目判断数组是否相等:" << equal << endl;
    // 2.直接==运算符比较: 原生数组无法这样比较
    cout << "直接用==判断数组是否相等:" << (A == B) << endl;
    return 0;
}
