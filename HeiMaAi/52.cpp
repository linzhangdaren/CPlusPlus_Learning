#include <iostream>
#include <cstdlib> // 包含随机数生成函数
#include <ctime>   // 包含时间函数

using namespace std;

int main()
{
    // 初始化随机数生成器
    srand(time(NULL));
    
    // 生成1-100之间的随机数
    int a = rand() % 100 + 1;
    
    cout << "我生成了1-100之间的随机数，你猜是多少？" << endl;
    int b;
    cout << "请输入您要猜测的数字：" << endl;
    
    do
    {
        cin >> b;
        if (a < b)
        {
            cout << "您猜的数字偏大，请重新输入：" << endl;
        }
        else if (a > b) // 修正语法错误
        {
            cout << "您猜的数字偏小，请重新输入：" << endl;
        }
        else
        {
            cout << "恭喜您猜对了" << endl;
            break; // 用户猜对了，退出循环
        }
    } while (true); // 循环条件改为true，因为退出循环的条件在内部处理
    
    return 0;
}