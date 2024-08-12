#include <iostream>
using namespace std;
// 给函数加命名空间 防止重复 namespace Zhang { void...}
// 调用同名不同域/不同命名空间的函数 Zhang::test();

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

int main()
{
    Zhang::test();

    Li::test();

    return 0;
}