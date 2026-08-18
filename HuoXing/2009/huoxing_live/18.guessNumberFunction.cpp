#include <iostream>
#include <ctime>

using namespace std;
// 数据类型占位空的数据类型 函数名称（参数列表）{函数内容}
void GuessNumber()
{
    srand((unsigned int)time(NULL)); // 无符号的随机种子
    int number = rand() % 100 + 1;   // 生成1到100之间的随机数 0+1到99+1的数字
    // cout << number << endl;
    // 默认都是42或者其他一个固定的数字 需要用时间的随机种子
    // srand((unsigned int)time(NULL))时间没有负值需要无符号一下;

    int value;

    while (true)
    {

        cin >> value; // 输入一个值

        if (value > number) // 如果输入的值小于随机数，执行下面的代码块，否则执行else下面的代码块。
        {
            cout << "猜错了！偏大了" << endl; // 输出一个字符串 "猜错了！偏大了
        }
        else if (value < number) // 如果输入的值大于随机数，执行下面的代码块，否则执行else下面的代码块。
        {
            cout << "猜错了！偏小了" << endl; // 输出一个字符串 "猜错了！偏小了
        }
        else // 如果输入的值等于随机数，执行下面的代码块。
        {
            cout << "恭喜你！猜对了！" << endl;
            break; // 输出一个字符串 "猜对了！
        }
    }
}
// 猜字游戏GuessNumber是否启用 取决于是否被主函数(main函数)调用
int main()
{
    GuessNumber(); // 调用函数

    system("pause"); // 暂停程序
    return 0;
}