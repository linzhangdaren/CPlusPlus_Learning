#include <iostream>
using namespace std;

int main()
{
    int i = 1;
    while (i <= 9)
    {
        int j = 1;
        while (j <= i)
        {
            cout << j << "*" << i << "=" << i * j << "\t";
            j++;
        }
        cout << endl;
        i++;
        cout << endl;
    }
    system("pause");
    return 0;
}