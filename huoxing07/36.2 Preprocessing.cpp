#include <iostream>
using namespace std;

// 二级指针的预处理写法 方便理解
#define PINT int *

int main()
{
    PINT pA = new int(1);
    PINT *ppA = &pA; //

    return 0;
}