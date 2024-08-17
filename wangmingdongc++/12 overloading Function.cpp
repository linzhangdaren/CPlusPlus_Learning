#include <iostream>
using namespace std;
// 重载函数：函数名相同，参数列表不同

void a()
{
    cout << "a" << endl;
}

void a(int a)
{
    cout << "b" << endl;
}

void a(int a, int b)
{
    cout << "c" << endl;
}

int main()
{
    a();
    a(1);
    a(1, 2); // 调用c

    return 0;
}