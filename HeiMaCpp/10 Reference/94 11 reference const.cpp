#include <iostream>
using namespace std;
// const形参 保护传入的实参不被修改
// 打印数据的函数
void showValue(const int &val)
{
    // val = 1000;//这样是不允许的
    cout << "value:" << val << endl;
}

int main()
{
    // int a = 10;
    // int &ref = 10;//10为常量,常量区不能被引用,需要引用堆栈上的

    // 如果想引用常量,需要加const:
    // const int &ref=10;
    // ref不能再修改了如:
    // ref=20;这样是不允许的

    // 原理是:const int temp=10;int &ref=temp; // temp是临时变量,在栈上

    int a = 100;
    showValue(a);
    return 0;
}