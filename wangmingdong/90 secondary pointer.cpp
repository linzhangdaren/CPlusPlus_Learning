#include <iostream>
using namespace std;

int main()
{
    int a = 11;
    int *p = &a;
    int **p2 = &p;

    cout << "a: " << a << endl;
    cout << "*p: " << *p << endl;
    cout << "**p2: " << **p2 << endl;
    cout << endl;

    cout << "&a: " << &a << endl;
    cout << "p: " << p << endl;
    cout << "*p2: " << *p2 << endl;
    cout << endl;

    cout << "p2:" << p2 << endl;

    return 0;
}
