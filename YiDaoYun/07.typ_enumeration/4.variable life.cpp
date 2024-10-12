// 变量的生命周期 variable life
// 根据{}域而定的 是相对不存在并不是销毁的

#include <iostream>
using namespace std;

int a = 1;

int main()
{
    int a = 2;
    {
        int a = 3;
        {
            int a = 4;
            cout << ::a << endl; // 输出1
            cout << a << endl;   // 输出4
        }
        cout << ::a << endl; // 输出1
        cout << a << endl;   // 输出3
    }
    cout << ::a << endl; // 输出1
    cout << a << endl;   // 输出2
    return 0;
}
// 通过以上可以看出
//  1. 局部变量仅在其 {} 块内有效，可重名，但作用域内只生效一次。
//  2. 全局变量在整个程序中有效，直到程序结束。
//  3. 局部变量的生命周期从声明到作用域结束，超出作用域后不可用。
//  4. 全局变量的生命周期从声明到程序结束。