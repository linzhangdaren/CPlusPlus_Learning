#include <iostream>
#include <stdio.h>

using namespace std;
int main()
{
    // 定义一个字符数组
    char ch[10];

    // 用gets函数从键盘读入一个字符串，并将其存储到ch中。
    cout << "请输入一个字符串，以回车结束：" << endl;
    gets(ch);

    // 将ch和ch2中的字符串输出到屏幕上。
    cout << "您输入的字符串为：" << endl;
    puts(ch);

    return 0;
}