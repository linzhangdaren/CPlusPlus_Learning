#include <iostream>
using namespace std;
// 大小写字母转换
// 采用了goto 语句实现循环 无论对错都再来一遍
int main()
{

    char c;
input:
    cout << "请输入一个大写字符,我们将给您转换成小写字母:" << endl;
    cin >> c;
    if (c >= 'A' && c <= 'Z')
    {
        c = c + 32;
        cout << "转换后的小写字母为:" << c << endl;
        goto input;
    }
    else
    {
        cout << "输入的字符不是大写字母!请重新输入:" << endl;
        goto input;
    }

    return 0;
}