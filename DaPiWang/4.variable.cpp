// 定义的变量名不可重复即使类型不同也不可以
// 一个班里不管男女不能有同样的名字 不然不知道叫谁

#include <iostream>
#include <string>
#include <iomanip> //高精度输出头文件
using namespace std;

int main()
{
    // 用杯子装水的案例来说明不同类型装的数据溢出的问题
    //  int a = 1;
    float a = 3.14;
    // conflicting declaration 'float a';冲突定义的意思
    long double b = 3.14159265358979323846L;

    cout << fixed << setprecision(20); // 高精度输出

    cout << a << endl;
    cout << b << endl;
    system("pause");
    return 0;
}