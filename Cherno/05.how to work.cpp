#include <iostream>

// 自定义打印信息函数
void log(const char *message)
{
    std::cout << message << std::endl;
}

int main()
{
    std::cout << "Hello World!" << std::endl; //<<这个符号是个函数
    // std::cout.print("Hello World!").print(std::endl);

    // 调用log函数
    log("This is a log message.");
    

    std::cin.get(); // 等待用户输入

    return 0;
}