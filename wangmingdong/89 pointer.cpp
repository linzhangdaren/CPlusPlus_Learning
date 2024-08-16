#include <iostream>
using namespace std;

int main()
{
    int num = 100;
    int *p = &num;

    // 修改num的值两种方法:

    // 1.num=新的数值;
    num = 200;
    cout << "num=新的数值/num = " << num << endl;

    // 2.*p=新的数值;
    *p = 300;
    cout << "*p=新的数值/num = " << num << endl;

    return 0;
}
