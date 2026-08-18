#include <iostream>
using namespace std;
// 主函数里的test调用的是Zhang的test函数还是Li的test函数呢?

namespace Zhang
{
    void test()
    {
        cout << "张三" << endl;
    }
}

namespace Li
{
    void test()
    {
        cout << "李四" << endl;
    }
}

using namespace Zhang; // 这里声明了Zhang的命名空间，所以调用的是Zhang的test函数

int main()
{
    test(); // 这里调用的是Zhang的test函数还是Li的test函数呢?
            // 因为头文件声明了Zhang的命名空间所以调用的是Zhang的test函数

    return 0;
}