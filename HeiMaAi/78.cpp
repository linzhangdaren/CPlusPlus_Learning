#include <iostream>
using namespace std;

int main()
{
    //尽量避免指针之间的赋值
    int *p1 = new int;
    *p1 = 10;
    int *p2 = p1;
    cout << *p1 << endl;
    cout<<*p2 << endl;
    cout << p1 << endl;
    cout << p2 << endl;
    delete p2;
    cout << *p1 << endl;
    return 0;
}