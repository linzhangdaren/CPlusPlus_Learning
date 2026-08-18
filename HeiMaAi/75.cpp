#include <iostream>
using namespace std;

int main()
{
    int *parr = new int[5]{1, 2, 3, 4, 5}; // 动态分配数组
    int *parr2 = new int[4];               // 新的动态分配数组
    // 遍历老数组 把老的数组放入新的数组中(不需要的就跳过)
    cout << "老数组：";
    for (int i = 0; i < 5; i++)
    {
        cout << parr[i];
    }
    cout << endl;

    for (int i = 0; i < 5; i++)
    {
        if (i == 2) // 凡是判断不是=号是==号!
        {
            continue;
        }
        if (i > 2)
        {
            parr2[i - 1] = parr[i];
        }
        else
        {
            parr2[i] = parr[i];
        }
    }

    delete[] parr; // 释放数组

    cout << "新数组：";
    for (int i = 0; i < 4; i++)
    {
        cout << parr2[i];
    }

    return 0;
}