#include <iostream>
#include <string>
#include <windows.h>

using namespace std;
int main()
{
    // 设置控制台输出代码页为UTF-8 (65001)
    SetConsoleOutputCP(65001);
    // 设置控制台输入代码页为UTF-8 (65001)
    SetConsoleCP(65001);

    cout << "你好!" << endl;
    // endl换行 全称endline结束行的意思

    // 暂停窗口
    system("pause");
    return 0;
}