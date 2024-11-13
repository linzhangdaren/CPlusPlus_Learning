// 数组指针
// 给数组指针赋值 数组数值的地址
#include <iostream>
using namespace std;

int main()
{

    // const int a = 3;
    // int *p[a]; // 声明数组指针
    int num[3]{1, 2, 3};
    int *p[3]; // 声明数组指针
    for (int i = 0; i < 3; i++)
    {
        p[i] = &num[i]; // 数组指针赋值
    }

    for (int i = 0; i < 3; i++)
    {
        // cout << *p[i] << " ";      // 输出数组元素 123
        // cout << *(p[i]) << " "; // 输出数组元素值
        // cout << **(p + i) << endl; // 输出数组元素值
        // cout << *(p + i) << endl;  // 输出数组元素值为地址
        // cout << p[i] << " ";       // 输出数组元素地址
    }
    cout << endl;

    return 0;
}