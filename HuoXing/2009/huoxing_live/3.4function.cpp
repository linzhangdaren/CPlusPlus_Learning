#include <iostream>
using namespace std;

void abc()
{                                    // 定义一个名为abc的函数，没有返回值，没有参数
    cout << "Hello, World!" << endl; // 输出字符串"Hello, World!"到标准输出流cout，并换行
}

int main()
{
    // 引入void abc 函数需要直接打出函数名也就是abc再加上括号和分号如：abc();
    abc();           // 调用abc函数
    system("pause"); // 暂停程序，等待用户输入任意键后继续
    return 0;        // 返回0表示程序正常结束
}
