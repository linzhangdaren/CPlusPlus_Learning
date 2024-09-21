// 有参数有返回值的函数案例
// 编写一个函数,实现从1到n累加求和
#include <iostream>
using namespace std;

int sumf(int num2)
{
    int result = 0;
    for (int i = 1; i <= num2; i++)
    {
        result += i;
    }
    return result;
}

int main()
{
    int num2 = 10;

    int sum = sumf(num2);

    cout << "从1到" << num2 << "累加求和结果为:" << sum;
    return 0;
}




// int sumf(int num2)
// {
//     int result = 0;
//     for (int i = 1; i <= num2; i++)
//     {
//         result += i;
//     }
//     return result;
// }

// int main()
// {
//     int sum = sumf(10);
//     cout << sum;
//     return 0;
// }