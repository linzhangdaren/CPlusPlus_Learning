// 基础加法函数
#include <iostream>
using namespace std;

int Multiply(int a, int b)
{
    return a * b;
}

int main()
{
    int result = Multiply(2, 3);
    cout << result << endl;

    int result2 = Multiply(4, 5);
    cout << result2 << endl;

    return 0;
}