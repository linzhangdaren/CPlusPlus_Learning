#include <iostream>
using namespace std;
//100以内所有整数的和，用for循环实现，并输出结果。
int main()
{
    int sum_result = 0;
    for (int i = 1; i <= 100; i++)
    {
        sum_result+=i; // 这里sum_result的值会改变，因为每次循环都会重新赋值
                                     // 例如第一次循环时sum_result=sum_result+1，第二次循环时sum_result=sum_result+2，以此类推
    }
    cout << sum_result << endl;
    return 0;
}