// break 结束循环
#include <iostream>
using namespace std;

int main()
{
    int i = 1;
    while (i <= 5)
    {
        cout << i << endl;
        if (i == 3)
        {
            break;
        }
        i++;
    }

    return 0;
}