// 请输入 1剪刀 2石头 3布
// 您出的是1
// 电脑出的是3，
// 你赢了！
#include <iostream>
using namespace std;

int main()
{

    cout << "请输入 1.剪刀 2.石头 3.布" << endl;
    cout << "请输入数值1-3：" << endl;

    int player1 = 1;
    cin >> player1;// 输入1-3的数字。
    cout << "您输入的是"<<player1 << endl; 

    int computer = 1;
    cout << "电脑出的是" << computer << endl; // 电脑出的是1-3的随机数。
    // if (玩家剪刀电脑布，玩家石头电脑剪刀，玩家布电脑石头)
    if ((player1 == 1 && computer == 3) || (player1 == 2 && computer == 1) || (player1 == 3 && computer == 2)) 
    {
        cout << "你赢了！" << endl;
    }
    else if (player1 == computer) // else if (玩家=电脑)
    {
        cout << "平局" << endl;
    }
    else
    {
        cout << "你输了！" << endl;
    }

    return 0;
}