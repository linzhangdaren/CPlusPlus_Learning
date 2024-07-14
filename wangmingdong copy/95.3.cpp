
#include <iostream>
using namespace std;

int main()

{ // 用三种方法输出数组a的元素值：
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    //     // 1.下标法

    //     for (int i = 0; i < 10; i++)
    //     {
    //         cout << a[i] << endl;
    //     }

    // 2.指针法
    int *p = &a[0];
    for (int i = 0; i < 10; i++)
    {
        cout << *(p + i) << endl;
    }
    //     // 3.数组名法（数组名代表数组的首地址）
    //     for (int i = 0; i < 10; i++)
    //     {
    //         cout << *(a + i) << endl;
    //     }

    return 0;
}