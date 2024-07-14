#include <iostream>
using namespace std;

int main()
{
    // 输出1-20之间的奇数
    for (int i = 1; i <= 20; i++)
    {
        if (i % 2 == 0)
        {
            continue;
            cout << i << endl;
            ;
        }
    }

    return 0;
}