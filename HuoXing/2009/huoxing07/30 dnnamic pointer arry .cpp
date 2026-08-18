#include <iostream>
#include <string>
using namespace std;

// 动态指针数组

int main()
{
    int **pData = new int *[5]; // 申请一个指针数组，这个数组有5个元素，每个元素都是一个指针，指向一个int类型的数组
    pData[0] = new int[3];      // 申请一个int类型的数组，这个数组有3个元素，这个数组的首地址被赋值给pData[0]

    return 0;
}