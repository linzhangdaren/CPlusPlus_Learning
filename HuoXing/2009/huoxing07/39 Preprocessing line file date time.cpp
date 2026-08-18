#include <iostream>
using namespace std;
// 打印当前行 __LINE__
// 打印当前文件 __FILE__
// 打印当前函数 __FUNCTION__
// 打印当前日期 __DATE__
// 打印当前时间 __TIME__
// 打印当前编译器版本 __cplusplus

int main()
{
    cout << "line: " << __LINE__ << endl;
    cout << "file: " << __FILE__ << endl;
    cout << "function: " << __FUNCTION__ << endl;
    cout << "date: " << __DATE__ << endl;
    cout << "time: " << __TIME__ << endl;
    cout << "cplusplus: " << __cplusplus << endl;
    

    return 0;
}