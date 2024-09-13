#include <iostream>
using namespace std;
// 内联函数

class A
{
public:
    int Max(int a, int b)
    {
        return a > b ? a : b;
    } // 这是一个内联函数 只有成员函数可以这样声明为内联函数
};

inline int Sum(int a, int b); // 声明内联函数
inline int Sum(int a, int b)
{
    return a + b;
}

int main()
{

    int a = 10, b = 20;
    int c = Sum(a, b); // 直接拿过来用 没有调用开销

    return 0;
}
