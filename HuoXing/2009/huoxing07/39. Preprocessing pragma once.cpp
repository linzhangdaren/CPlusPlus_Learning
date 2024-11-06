#include <iostream>
using namespace std;
// 头文件包含一次 防止头文件重复包含
#pragma once

#define DEBUG 0
#if DEBUG==0
#pragma message("hello world") //如果DEBUG==0，则输出hello world 输入自定义日志
#endif

int main()
{

    return 0;
}