// 有参数无返回值 两个数的加法
#include <iostream>
using namespace std;
void add(int num, int num2)
{
    int result = 0;
    result = num + num2;
    cout << num << "+" << num2 << "=" << result << endl;
}

int main()
{
    add(1, 2);
    return 0;
}
