#include <iostream>
using namespace std;

int main()
{
    int *parr1 = new int[10]{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    cout << "parr1: ";
    for (int i = 0; i < 10; i++)
    {
        cout << parr1[i] << " ";
    }
    cout << endl;

    int *parr2 = new int[8];

    int offset = 0;
    for (int i = 0; i < 10; i++)
    {
        if (i == 0 || i == 9)
        {
            offset++;
            continue;
        }

        parr2[i - offset] = parr1[i];
    }
    delete[] parr1;
    cout << "parr2: ";
    for (int i = 0; i < 8; i++)
    {
        cout << parr2[i] << " ";
    }

    return 0;
}