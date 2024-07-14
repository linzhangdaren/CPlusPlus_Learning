#include <iostream>
using namespace std;

int main()
{
    for (int i = 1; 1; i++)
    {
        if (i > 20)
        {
            break;
        }
        cout << i << endl;
    }
    return 0;
}