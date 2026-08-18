// 数组&指针
#include <iostream>
using namespace std;

int main()
{
    int a[5] = {1, 2, 3, 4, 5};
    int *b = new int[5];
    // // 把数组a的值赋给指针b
    // for (int i: a)
    // {
    //     b[i] = a[i];
    // }

    //// 用memset初始化指针b
    // memset(目标数组,初始值,数据大小) 这个初始值是个char知识点以后补
    // memset(b, 0, 5 * sizeof(int));

    // 用memcpy函数把数组a的值赋给指针b
    // memcpy(目标数组,数据来源数组,数据大小)
    memcpy(b, a, 5 * sizeof(int));
    for (int i = 0; i < 5; i++)
    {
        cout << b[i] << " ";
    }
    // 释放内存;
    delete[] b;

    return 0;
}