#include <iostream>
#include <string>
using namespace std;

// 指针数组 存放指针的数组

int main()
{
    // int *a[3] = {new int(1), new int(2), new int(3)};
    int *a[5]{nullptr};    // 创建一个指针数组，数组大小为5，每个元素都是int*类型的指针
    a[0] = new int(1);     // 给第一个指针赋值
    cout << *a[0] << endl; // 指针指向的值
    cout << a[0] << endl;  // 指针的地址
    // delete a[0]; // 释放内存
    // a本身不需要释放,需要释放的是a[0]指向的内存

    return 0;
}