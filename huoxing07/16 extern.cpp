#include <iostream>
using namespace std;

extern int a; // 声明变量a为全局变量 只声明，不定义
// 在其他源文件中定义
// 允许多个源文件共享同一个全局变量，但只在一个源文件中定义它。

int main()
{

    return 0;
}  