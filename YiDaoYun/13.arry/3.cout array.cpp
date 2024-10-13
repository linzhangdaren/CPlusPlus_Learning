// 数组的遍历

// 数组元素的个数为:数组的大小/元素的大小
// 数组大小为sizeof(arr)
// 元素大小为sizeof(arr[0])
// 计算数组长度为:sizeof(arr)/sizeof(arr[0])

#include <iostream>
using namespace std;

int main()
{
    // 定义一个整型数组并初始化，数组包含10个元素
    int arr[10] = {65, 66, 67, 68, 69, 70, 71, 72, 73, 74};

    // 遍历数组的传统方法：
    // 使用 for 循环遍历数组，循环次数为数组的长度
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    // 遍历数组的新方式1：
    // for(变量类型 变量因子 : 数组名) 可以指定类型 int/char/double..
    for (char i : arr) // char自定义输出类型非常方便
    {
        cout << i << " "; // ABC...
        // cout << char(i+32) << " "; //  运算的话就得转换了.
    }
    cout << endl;

    // 遍历数组的新方式2：
    // for(auto 变量因子:数组)// auto可自动推断数组元素的类型
    for (auto i : arr)
    {
        cout << i << " ";
    }
    cout << endl;

    system("pause");
    return 0;
}
