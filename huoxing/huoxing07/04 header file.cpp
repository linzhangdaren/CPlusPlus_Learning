#include <iostream>
#include "04 header file.h"
using namespace std;

// 跨文件调用函数

int main()
{

    int Num1 = 1;
    int Num2 = 2;
    int Max(int, int); // 声明函数 可以不写形参名字  对应函数文名04 header file function.cpp
    cout << Max(Num1, Num2) << endl;
    return 0;
}