// 输出1-100之间不能被3整除的数
#include <iostream>
using namespace std;

int main()
{
    for (int i = 1; i <= 100; i++)
    {
        if (i % 3 == 0)
        {
            continue;
        }
        cout << i << endl;
    }

    return 0;
}