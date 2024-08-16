#include <iostream>
using namespace std;

void point(int *p1, int *p2)
{
    cout << "请输入p1的值:" << endl;
    cin >> *p1;
    cout << "请输入p2的值:" << endl;
    cin >> *p2;
}

int main()
{

    int p1;
    int p2;
    point(&p1, &p2);
    cout << "p1 = " << p1 << endl;
    cout << "p2 = " << p2 << endl;

    return 0;
}
