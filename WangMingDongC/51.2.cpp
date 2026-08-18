// continue 结束本次循环中下面的代码,跳过的意思,执行下次循环
#include <iostream>
using namespace std;

int main()
{
    for (int i = 1; i <= 5; i++)
    {

        cout << i << endl;
        if (i == 3)
        {
            continue;
        }
        cout << "--------" << endl;
    }

    return 0;
}