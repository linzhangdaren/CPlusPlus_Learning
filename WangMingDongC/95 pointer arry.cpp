
#include <iostream>
using namespace std;

int main()
{

    int a[] = {1, 2, 3, 4, 5};
    cout << "int a[] = {1, 2, 3, 4, 5};" << endl;

    int *p = &a[2];
    cout << "*p=&a[2];*p值为:" << a[2] << endl;

    *p = 100;
    cout << "*p=100;a[2]值为:" << a[2] << endl;
    cout << "改后的数组为:int a[] = {1, 2, 100, 4, 5};" << endl;
    cout << endl;

    cout << "输出p,p+1,p+2的地址" << endl;
    cout << "p值为:" << p << endl;
    cout << "p+1值为:" << (p + 1) << endl;
    cout << "p+2值为:" << (p + 2) << endl;
    cout << endl;

    cout << "指针偏移" << endl;
    cout << "*p值为:" << *p << endl;
    cout << "*(p+1)值为:" << *(p + 1) << endl;
    cout << "*(p+2)值为:" << *(p + 2) << endl;

    return 0;
}