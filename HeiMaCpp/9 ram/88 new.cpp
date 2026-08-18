#include <iostream>
using namespace std;
// 堆区开辟数组 new int[]

void test02()
{
    int *arr = new int[10];
    for (int i = 0; i < 10; i++)
    {
        arr[i] = i + 100; // 给数组赋值100~109
    }
    for (int i = 0; i < 10; i++) // 输出数组
    {
        cout << arr[i] << endl;
    }
    // 释放数组
    delete[] arr; // 不加中括号会释放一个元素而不是数组
};

// 主函数
int main()
{
    // 输出
    test02();

    return 0;
}