#include <iostream>
using namespace std;

int add(int a, int b)
{
    int sum;
    sum = a + b;

    return sum;
}

int main()
{

    int a;
    int b;
    int c;
    cout << "请输入两个值:" << endl;
    cin >> a >> b;
    cout << a << "+" << b << "=" << add(a, b) << endl;
    return 0;
}
