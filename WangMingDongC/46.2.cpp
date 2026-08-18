#include <iostream>
using namespace std;
// 输出20以内的偶数
int main()
{

    // for (int i = 1; i <= 20; i++)
    // {
    //     if (i % 2 == 0)
    //     {
    //         cout << i << endl;
    //     }
    // }

    for (int i = 2; i <= 20; i += 2)
    {
        cout << i << endl;
    }
   
    return 0;
}