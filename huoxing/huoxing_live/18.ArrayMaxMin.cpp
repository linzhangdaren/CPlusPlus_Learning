#include <iostream>
using namespace std;

void ArrayFunction()
{
    int a[5] = {1, 2, 3, 7, 5}; // 创建一个数组并初始化。
    int Max = a[0];             // 数组的最大索引值。

    int length = sizeof(a) / sizeof(int);
    cout << "数组的长度为：" << length << endl; // 输出数组的长度。

    for (int i = 0; i < length; i++)
    {
        if (Max < a[i]) // 检查数组中的最大值。
        {
            Max = a[i]; // 更新最大值。
        }
    }

    cout << "数组中的最大值为：" << Max << endl; // 输出最大值。
}

int main()
{

    ArrayFunction(); // 调用函数来访问数组元素。
    system("pause");
    return 0;
}
