#include <iostream>

// 命名空间

// using指令 操作一次，可以操作一个命名空间
// 如:using namespace std;

// using声明 操作多次，可以操作命名空间中的多个成员
// 如:using std::cin;using std::cout;

// 五中命名空间 全局/普通/嵌套/内联/未命名的
// 全局命名空间: int a = 10; ::a  无意义
// namespasce进行构建 使用using namespace进行引入

void a()
{
    std::cout << "void:123" << std::endl; //
}

namespace UE4
{
    int Am = 10;
}
namespace UE5
{
    int Bm = 20;
}

int main()
{
    using std::cin;
    using std::cout;
    using std::endl;

    using namespace UE4;
    Am = 100; // 不加上using namespace UE4; 就需要UE4::Am

    using UE5::Bm;
    Bm = 200;

    cout << "123" << endl;

    return 0;
}