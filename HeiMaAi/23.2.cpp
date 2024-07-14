#include <iostream>
#include <iomanip>

using namespace std; // 引入整个std命名空间

int main() {
    double a = 1.2345678987654321; // 定义一个浮点数

    // 直接使用流操纵符，无需std::前缀
    cout << fixed << setprecision(18);

    // 输出浮点数a
    cout << a << endl;

    return 0;
}