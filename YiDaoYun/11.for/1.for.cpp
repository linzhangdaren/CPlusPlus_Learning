#include <iostream>
using namespace std;

int main()
{
    // for循环列出所有小写字母
    for (char c = 'a'; c <= 'z'; c++)
    {
        cout << c;
    }

    // 增加计数换行功能:
    cout << "计数换行功能:if (count == 5)" << endl;
    // for循环列出所有大写字母,每5个换行一次
    int count = 0; // 换行条件计数器
    for (char c = 'A'; c <= 'Z'; c++)
    {
        if (count == 5)
        {
            cout << endl;
            count = 0;
        }
        count++;
        cout << c;
    }

    // 取余换行功能:不采用课程的方法,不便阅读,不变控制
    return 0;
}