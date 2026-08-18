#include <iostream>
using namespace std;
// 引用

int main()
{
    int a = 10;
    int &b = a;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    return 0;
}