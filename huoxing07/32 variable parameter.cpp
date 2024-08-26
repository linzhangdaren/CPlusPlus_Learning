#include <iostream>
#include <string>
using namespace std;

// 可变参数 variable parameters
// 同类型被当做数组来传递 并在末尾加上NULL 0

void PushNumber(int Num, ...) // 用三个点表示可变参数
{
    int *pPara = &Num; // 指针指向第一个参数
    pPara[0];          // 访问第一个参数
    pPara[1];          // 访问第二个参数
    pPara[2];          // 访问第三个参数
    pPara[3];          // 0 末尾
    pPara[4];          // 无意义
}

int main()
{
    PushNumber(1, 2, 3); // 主观填写0那就恶心了
    return 0;
}