#include <iostream>
using namespace std;

#define NUM 1 // NUM 可以作为一个总开关 修改1为0，则不编译

int main()
{
    // int NUM = 0;这样单独用int来控制是跟#define NUM 1效果看起来是一样的
    // 但是#define NUM 是预编译，而int NUM 是编译，所以#define NUM 1更优

#if NUM // 如果为真，则编译 如果为假，则不编译
    cout << "hello world" << endl;
#endif

#if NUM // 如果为真，则编译 如果为假，则不编译
    cout << "hello world" << endl;
#endif

#if NUM // 如果为真，则编译 如果为假，则不编译
    cout << "hello world" << endl;
#endif

    return 0;
}