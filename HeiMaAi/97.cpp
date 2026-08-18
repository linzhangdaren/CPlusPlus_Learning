#include <iostream>
using namespace std;

void switch_num(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int x = 1;
    int y = 2;
    switch_num(x, y);
    cout << x << " " << y << endl;

    return 0;
}