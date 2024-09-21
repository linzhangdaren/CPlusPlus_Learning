#include <iostream>
using namespace std;

void abc(int *p)
{
    *p = 100;
}
int main()
{

    int num[10] = {1, 2, 3, 4, 5};

    abc(num);

    for (int i = 0; i < 10; i++)
    {
        cout << num[i] << " ";
    }
}