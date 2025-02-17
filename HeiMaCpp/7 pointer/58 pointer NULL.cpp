#include <iostream>
using namespace std;
// 空指针不能访问，否则程序崩溃
// 0~255是系统保留的内存地址，不能访问
int main()
{
    int *p = NULL; // 指针变量p指向空
    // *p = 100;      // 解引用空指针，程序崩溃
    // cout << *p << endl;// 程序崩溃不能输出
    system("pause");
    return 0;
}