// 【 Cherno】【C++ 教程】【006】C++编译器的工作原理】https://www.bilibili.com/video/BV1XeD4YwEUY?vd_source=d4f406245cfeb1739989d1008109ebbf
#include <iostream>//预处理语句 发生在编译之前 include是指找到一个文件名为iostream


// 自定义打印信息函数
void log(const char *message)
{
    std::cout << message << std::endl;
}

int main()//应用程序入口点 计算从这里开始执行代码/main默认返回0
{
    std::cout << "Hello World!" << std::endl; //<<这个符号是个函数
    // std::cout.print("Hello World!").print(std::endl); // 也可以这样写

    // 调用log函数
    log("This is a log message.");
    

    std::cin.get(); // 等待用户输入回车键
    

    return 0;
}