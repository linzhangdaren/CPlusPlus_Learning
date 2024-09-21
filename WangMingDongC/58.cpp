// 无参数有返回值的函数案例
#include <iostream>
using namespace std;
double test()
{
    int age = 18;
    if (age >= 18)
    {
        return 3.14;
    }
    else
    {
        return 3.0;
    }
}


int main()
{
    double result;
    result = test();
    // cout << test() << endl;
    cout << result << endl;
    return 0;
}

