// 整型数据类型的取值范围
#include <iostream>
#include <climits>
using namespace std;
int main()
{

    cout << "int类型的最小值: " << INT_MIN << endl;              // 输出int类型的最小值。
    cout << "int类型的最大值: " << INT_MAX << endl;              // 输出int类型的最大值。
    cout << "short类型的最小值: " << SHRT_MIN << endl;           // 输出short类型的最小值。
    cout << "short类型的最大值: " << SHRT_MAX << endl;           // 输出short类型的最大值。
    cout << "long类型的最小值: " << LONG_MIN << endl;            // 输出long类型的最小值。
    cout << "long类型的最大值: " << LONG_MAX << endl;            // 输出long类型的最大值。
    cout << "unsigned int类型的最大值: " << UINT_MAX << endl;    // 输出unsigned int类型的最大值。
    cout << "unsigned short类型的最大值: " << USHRT_MAX << endl; // 输出unsigned short类型的最大值。
    cout << "unsigned long类型的最大值: " << ULONG_MAX << endl;  // 输出unsigned long类型的最大值。
    return 0;                                                    // 返回0表示程序成功执行。
}