#include <iostream>
using namespace std;
// 模板函数和模板类的区别

// 1. 模板类没有自动类型推导
// Person p("孙悟空", 1000); //错误
// Person<string,int>p("孙悟空", 1000); // 正确

// 2. 类模板在模板参数列表中可以设置默认参数
// template <class T1, class T2 = int>
// 如:
// Person<string>p("孙悟空", 1000);// 正确
// 缺少了第二个int类型的参数，使用默认参 int 数不报错

// 主函数
int main()
{

    return 0;
}