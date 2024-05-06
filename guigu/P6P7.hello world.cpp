#include <iostream> //引用预处理库
// 取消std：：的写法：头文件加上 using namespace std;
int main() // int是Integer整数 的缩写
{

    std::cout << "hello world" << std::endl;

    // 取消调试窗口：选项>调试>调试停止时自动关闭控制台 勾选即可
    // 取消调试窗口后 一闪而过看不到黑窗口 需要停留窗口时加上 System("pause");
    // 或者来一个cin.get();也可以保留黑窗口
    std::cin.get(); // 等待用户输入任意键
    return 0 ; // 0 表示程序正常退出，非零表示异常退出。
}
//如何生成.exe文件呢? 
//1.需要在cpp文件上右键 编译快捷键是ctrl+f7生成obj文件
//2.在项目文件上右键生成 把obj和库文件做链接即可生成.exe文件