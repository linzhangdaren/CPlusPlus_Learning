// 夹杂中英文字符的长度判断

#include <iostream>
#include <string>
using namespace std;

int main()
{
    cout << "请您输入字符,系统自动计算字符个数:" << endl;
    string str;
    cin >> str;

    int len = 0;

    for (int i = 0; str[i]; i++) // 字符串末尾\0来判断，不能写成 str[i]!= '\0'
    {
        if (str[i] < 0)
        {
            i++; // 跳过两个字节的中文字符
        }

        len++;
    }
    cout << "您输入了" << len << "个字符" << endl;

    return 0;
}