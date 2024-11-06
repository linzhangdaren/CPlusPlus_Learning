#include <iostream>
using namespace std;
// 多层嵌套命名空间
// 内联命名空间 inline namespace可以 直接访问内联命名空间中的变量
// 内联命名空间不要用在最外层,嵌套在里面用

namespace A
{
    int a = 1;
    namespace B
    {
        int b = 2;
    }
}

// 内联命名空间 inline namespace
namespace C
{
    int c = 3;
    inline namespace D
    {
        int d = 4;
    }
}
// 未命名空间
namespace
{
    int e = 5;
}

int main()
{
    cout << A::B::b << endl; // 访问B需要通过A然后再访问B才能访问b
    cout << C::d << endl;    // 有了内联访问d时直接访问C不用再访问D

    // 复合语句命名空间
    {
        cout << e << endl; // 可以直接访问括号以外的命名空间中的变量
    }
    
    return 0;
}