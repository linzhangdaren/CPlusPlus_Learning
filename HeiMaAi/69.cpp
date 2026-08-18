#include <iostream>
using namespace std;

int main()
{
    int v1[2][3] = {
        {1, 2, 3},
        {4, 5, 6}};
    for (int i = 0; i < sizeof(v1) / sizeof(v1[0]); i++)
    {
        for (int j = 0; j < sizeof(v1[0]) / sizeof(v1[0][0]); j++)
        {
            cout << v1[i][j] << " ";
        }
    }
    return 0;
}