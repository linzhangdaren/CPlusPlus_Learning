#include <iostream>
using namespace std;
// 计算一个圆的面积和周长
double area(double r);
double area(double r)
{
    return 3.1415 * r * r;
}
double perimeter(double r);
double perimeter(double r)
{
    return 2 * 3.1415 * r;
}

int main()
{
    // 求面积
    double r;
    cout << "请输入圆的半径:";
    cin >> r;
    cout << "半径为" << r << "的圆面积为:" << area(r) << endl;
    // 求周长
    cout << "半径为" << r << "的圆周长为:" << perimeter(r) << endl;

    return 0;
}