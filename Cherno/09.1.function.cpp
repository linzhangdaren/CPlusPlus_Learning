// 加法函数 plus升级版 嵌套函数直接输出结果

#include <iostream>
using namespace std;

int Multiply(int a, int b)
{
    return a * b;
}

void MP(int a, int b)
{
    int result = Multiply(a, b);
    cout << result << endl;
}

int main()
{
    MP(1, 2);
    MP(3, 4);

    return 0;
}