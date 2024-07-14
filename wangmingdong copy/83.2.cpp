#include <iostream>
using namespace std;

int main()
{
    // 定义一个二维字符数组并初始化 两个名字
    // 每个名字占用21个空间多加一个为了留给/0结束符
    char names[2][21] = {"abc", "edf"};
    // 输出名字
    cout << names[0] << endl;
    cout << names[1] << endl;
    // 直接输出names
    cout << names << endl; // 输出的是数组名，即地址，不是名字本身

    return 0;
}