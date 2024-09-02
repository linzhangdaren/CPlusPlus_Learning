#include <iostream>
#include <string>
using namespace std;
const double PI = 3.1415926;
// 设计一个圆的类,求圆的周长

class Circle
{
public:
    int m_r;

    double calculateZCh()
    {
        return 2 * PI * m_r;
    }
};

// 主函数
int main()
{
    Circle c1;
    c1.m_r = 10;
    cout << "圆的周长是:" << c1.calculateZCh() << endl;

    system("pause");
    return 0;
}