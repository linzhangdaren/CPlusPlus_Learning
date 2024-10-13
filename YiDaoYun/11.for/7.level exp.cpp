// 按L键 输出升级所需经验值
// 不分大小写
// 对齐排版输出

#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

int main()
{
    char cin_char = _getch();
    if (cin_char == 'l' || cin_char == 'L')
    {
        for (int level = 1; level <= 100; level++)
        {
            cout << setfill(' ') << setw(2) << level
                 << " " << setfill(' ') << setw(10)
                 << level * 100 << endl;
        }

        return 0;
    }
}