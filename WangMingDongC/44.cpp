#include <iostream>
using namespace std;
 
int main() // 主函数，程序入口
{
    int i = 1; // 定义整型变量i并初始化为1
 
    do // do-while循环，先执行一次再判断条件
    {
        cout << "第" << i << "次循环" << endl; // 输出循环次数
        i++; // i自增1
    } while (i==1); // 当i等于1时继续循环
 
    return 0; // 返回主函数执行完成
}