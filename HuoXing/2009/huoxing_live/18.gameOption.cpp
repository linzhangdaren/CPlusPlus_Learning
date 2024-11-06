#include <iostream>
using namespace std;

void Easy() {}
void Medium() {}
void Hard() {}
void Extreme() {}
void UI()
{
    cout << "请选择您的游戏难度" << endl;
    cout << "1.简单" << endl;
    cout << "2.中等" << endl;
    cout << "3.困难" << endl;
    cout << "4.极端" << endl;
    cout << "请输入您的选择（1-4）：" << endl;
}
void GamePlay()
{
    int oper;
    cin >> oper;  // 获取用户输入的操作码
    switch (oper) // 根据操作码执行相应的操作
    {
    case 1: // 如果操作码为1，执行操作1
        Easy();
        break; // 操作执行完毕，跳出switch语句
    case 2:    // 如果操作码为2，执行操作2
        Medium();
        break; // 操作执行完毕，跳出switch语句
    case 3:    // 如果操作码为3，执行操作3
        Hard();
        break; // 操作执行完毕，跳出switch语句
    case 4:    // 如果操作码为4，执行操作4
        Extreme();
        break;                          // 操作执行完毕，跳出switch语句
    default:                            // 如果操作码不是1-4中的任意一个，执行默认操作
        cout << "无效的操作码" << endl; // 输出错误信息
        break;                          // 操作执行完毕，跳出switch语句
    }
    cout << "年选择的是：" << oper << endl; // 输出用户选择
    cout << "游戏开始！" << endl;           // 游戏开始提示
}

int main()
{
    UI(); // 调用游戏界面函数
    GamePlay(); // 调用游戏主函数
    return 0;
}