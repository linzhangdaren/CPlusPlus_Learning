#include <iostream>
using namespace std;
//
enum EColor // 可以固定枚举类型的大小如:enum EColor:char固定为1个字节
// 只能是整型类型:char、short、int、long,long long
{
    Red,
    Blue,
    White,
};

int main()
{
    EColor TColor = EColor::Blue; // 或者简写EColor TColor = Blue;但是不建议有多个枚举里面都有Blue就没法区分了
    // //使用方法1:
    // if (TColor == EColor::Blue)
    // {
    //     cout << "TColor is Blue" << endl;
    // }
    // 使用方法2:
    switch (TColor)
    {
    case Red:
        break;
    case Blue:
        cout << "TColor is Blue" << endl;
        break;
    case White:
        break;
    default:
        break;
    }

    return 0;
}