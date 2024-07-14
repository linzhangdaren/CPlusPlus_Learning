#include <iostream>
using namespace std;

int main()
{
    int *p = new int[10]; // new 关键字申请内存;
    p[0] = 1;
    p[1] = 2;

    cout << " p[0] = " << p[0] << endl;
    cout << "*p的值=" << *p << endl; //*p为第一个元素p[0]的值
    cout << "*(p+1)的值=" << *(p + 1) << endl;

    delete[] p; // delete 关键字释放内存;

    return 0;
}