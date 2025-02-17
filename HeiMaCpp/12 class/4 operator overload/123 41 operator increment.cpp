#include <iostream>
using namespace std;
// 重载运算符 increment ++

int main()
{
    int a = 10;
    cout << ++a << endl; // 输出11
    cout << a << endl;   // 输出11

    int b = 10;
    cout << b++ << endl; // 输出10
    cout << b << endl;   // 输出11

    return 0;
}