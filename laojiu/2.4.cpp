#include <iostream>
using namespace std;
#include <iomanip>
int main()
{
    float a = 12345.123456789;
    double b = 12345.123456789;
    long double c = 12345.123456789;

    cout << fixed;            // 设置输出为定点表示法.固定显示
    cout << setprecision(15); // 设置输出精度为15位小数.精度

    cout << a << endl
         << b << endl;
    cout << c << endl; // 输出精度更高
    system("pause");
    return 0;
}