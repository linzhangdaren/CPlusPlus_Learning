// 命名空间的概念:根文件夹一样可以防止重名

// C盘::Windows::System32::新建文件夹::新建文件夹::新建文件夹...

// 粮食仓::水果::苹果
//            ::香蕉
//            ::梨

#include <iostream>
#include <string>

// 自己定义命名空间 要在函数外定义
namespace name_zph
{
    std::string zphName = "张鹏华";
    int zphAge = 25;
}

int main()

{

    // 没有命名空间
    std::cout << "你好" << std::endl;

    // 使用命名空间后省去了 std::
    using namespace std;
    cout << "你好" << endl;

    // 或者单独导入命名空间中的特定函数
    // using std::cout;
    // suing std::cin;
    // using std::endl;

    // 使用自定义的命名空间-name_zph
    using namespace name_zph;
    // 或者单独使用命名空间中的特定变量:using name_zph::zphName;
    cout << zphName << endl;
    cout << zphAge << endl;

    return 0;
}
