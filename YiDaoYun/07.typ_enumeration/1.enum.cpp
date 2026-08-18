// 枚举变量 enum variable
#include <iostream>
using namespace std;
// 枚举的意义在于所见即所得,默认0开始,也可以自定义

// // 如果用define也可以
// #define Normal 0    // 一般
// #define High 1      // 高
// #define Rare 2      // 稀有
// #define Epic 3      // 史诗
// #define Myth 4      // 神话
// #define Legendary 5 // 传说

int main()
{
    enum class Equips : int // 定义枚举类,int可不写默认是int
    {
        Normal,
        High,
        Rare,
        Epic,
        Myth,
        Legendary
    };

    Equips A = Equips::Normal; // 枚举变量A的默认值是Normal
    cout << int(A) << endl;    // 输出0

    return 0;
}

// // 譬如:
// enum Color
// {
//     RED,
//     GREEN,
//     BLUE
// };
// // 然后可以用Color变量来表示颜色,比如:
// Color myColor = RED;
// // 也可以用switch语句来处理枚举变量:
// switch (myColor)
// {
// case RED:
//     cout << "My favorite color is red." << endl;
//     break;
// case GREEN:
//     cout << "My favorite color is green." << endl;
//     break;
// case BLUE:
//     cout << "My favorite color is blue." << endl;
//     break;
// default:
//     cout << "Invalid color." << endl;
//     break;
// }