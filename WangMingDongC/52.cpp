// break 练习
// 计算半径r从1-10的面积,并且面积area不能大于100,输出r和对应的area
#include <iostream>
using namespace std;
int main()
// {
//     float area = 0;
//     for (int r = 1; r <= 10; r++)
//     {
//         cout << "这是第" << r << "次循环" << endl; // 输出当前循环次数
//         area = 3.14 * r * r;
//         if (area <= 100)
//         {
//             cout << "半径为" << r << "的圆形面积为" << area << endl;
//         }
//         else
//         {
//             break;
//         }
//     }

//     return 0;
// }

{
    float area = 0;
    for (int r = 1; r <= 10; r++)
    {

        cout << "这是第" << r << "次循环" << endl; // 输出当前循环次数
        area = 3.14 * r * r;
        if (area >= 100)
        {
            break;
        }
        cout << "半径为" << r << "的圆形面积为" << area << endl;
    }

    return 0;
}