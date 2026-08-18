#include <iostream>
using namespace std;

int main()
{
    int i = 0;
    for (; i < 10; i++)
    {
        if (i % 2 != 0)
        {
            continue;
        }
        cout << i << endl; // 输出0到9之间的偶数
    }

    return 0;
}