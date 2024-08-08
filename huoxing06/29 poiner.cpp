#include <iostream>
using namespace std;
// 指针取地址&

int main()
{
    int a = 10;
    int *pa = &a;

    cout << "a的地址是:(&a)" << &a << endl;
    cout << "a的地址是:(pa)" << pa << endl;
    cout << endl;

    cout << "a的值是:(a)" << a << endl;
    cout << "a的值是:(*pa)" << *pa << endl;

    return 0;
}