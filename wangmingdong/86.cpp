#include <iostream>
#include <stdio.h>

using namespace std;
int main()
{
    // 定义两个字符数组
    char ch[10];
    char ch2[10];

    // 从键盘输入两个字符串,回车录入另一个字符串。
    cout << "请分别输入两个字符串，以回车结束：" << endl;
    cin.getline(ch, 10);
    cin.getline(ch2, 10);

    // 将ch和ch2中的字符串输出到屏幕上。
    cout << "您输入的两个字符串为：" << endl;
    puts(ch);
    puts(ch2);

    return 0;
}