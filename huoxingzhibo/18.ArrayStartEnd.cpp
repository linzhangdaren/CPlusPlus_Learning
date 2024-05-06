#include <iostream>
using namespace std;

void ArrayStartEnd()
{
    int a[5] = { 1, 2, 3, 4, 5 }; // 数组初始化，包含5个元素，从a[0]到a[4]

    int start = 0; // 数组的起始位置，从0开始，对应a[0]
    int end = sizeof(a) / sizeof(a[0]) - 1; // 数组的结束位置，从0开始，对应a[4]（最后一个元素）
    
    while (start<end)
    {
        //首尾交换
        int temp = a[start];
        a[start] = a[end];
        a[end] = temp; // 交换a[start]和a[end]的值，实现逆序排列
        start++; // 移动start指针到下一个位置，从a[0]移动到a[1]
        end--; // 移动end指针到前一个位置，从a[4]移动到a[3]
    }
    cout<<"逆序后的数组为："<<endl; // 输出逆序后的数组元素
    for (int i = 0; i < sizeof(a) / sizeof(a[0]); i++) // 注意这里改为 sizeof(a) / sizeof(a[0])，因为数组大小是5
    {
        cout << a[i] << " "; // 输出数组元素
    }
}

int main() {
    ArrayStartEnd();
    system("pause");
    return 0;
}
