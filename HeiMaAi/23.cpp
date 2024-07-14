#include <iostream>
#include <iomanip> // 引入流操纵器库

using namespace std;

int main()
{
    double a = 1.2345678987654321;

    // 使用fixed流操纵器和width操纵器来控制输出格式
    cout << fixed << setprecision(20); // 设置小数点后20位
    cout.width(20); // 设置输出宽度为20位

    cout << a << endl;

    return 0;
}