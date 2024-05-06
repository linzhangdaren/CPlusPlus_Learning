//九九乘法表
#include <iostream>
using namespace std;

int main()
{

    // for (int i = 1; i <= 9; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << j << "x" << i << "=" << i * j << "\t";
    //     }
    //     cout << endl;
    // }

    // int i = 1;
    // while (i <= 9)
    // {
    //     int j = 1;
    //     while (j <= i)
    //     {
    //         cout << j << "x" << i << "=" << i * j << "\t";
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    int i = 1;
    do
    {
        int j = 1;
        do
        {
            cout << j << "x" << i << "=" << i * j << "\t";
            j++;
        } while (j <= i);
        cout << endl;
        i++;
    } while (i <= 9);
    return 0;
}