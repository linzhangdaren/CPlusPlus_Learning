#include <iostream>
#include <iomanip>
using namespace std;
// 九九乘法表
int main()
{
    // //嵌套循环解析:
    // //1.打印一行数字 1-9
    //  for (int x = 0; x < 10; x++)
    //  {
    //      cout << x
    //  }

    // //2.打印9个换行,无内容只有换行符
    //  for (int y = 0; y < 10; y++)
    //  {

    //     cout << endl;
    // }

    // // 3.把1放到2里,会出现10行内容,每行9个数字,然后进行排版
    // for (int y = 0; y < 10; y++)
    // {
    //     for (int x = 0; x < 10; x++)
    //     {
    //         cout << setw(2) << x * y << " ";
    //     }
    //     cout << endl;
    // }

    ////4.用continue跳过去掉多余的0
    for (int y = 0; y < 10; y++)
    {
        for (int x = 0; x < 10; x++)
        {
            if (x == 0 || y == 0) // continue
            {
                continue;
            }
            cout << setw(2) << x * y << " ";
        }
        cout << endl;
    }

    return 0;
}