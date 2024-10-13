// 二维数组 2d array 完整拼写 two_dimensional_arrays

#include <iostream>
using namespace std;

int main()
{
    // 3行5列
    int arr[3][5] = {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15}};

    // // 遍历思路
    // // 先打行
    // for (int j = 0; j < 3; j++)
    // {
    //     cout << arr[j][0] << endl;
    //     ;
    // }
    // //再打列
    // for (int i = 0; i < 5; i++)
    // {
    //     cout << arr[0][i] << " ";
    // }

    // // 结合行和列+排版
    // for (int j = 0; j < 3; j++)
    // {
    //     for (int i = 0; i < 5; i++)
    //     {
    //         cout << "\t" << arr[j][i] << " ";
    //     }
    //     cout << endl;
    // }

    return 0;
}