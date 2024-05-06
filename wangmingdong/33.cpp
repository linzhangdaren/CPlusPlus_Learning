//石头剪刀布升级版

#include<iostream>
#include<time.h>
using namespace std;


int main(){

    int player1;
    int computer;

    cout << "请输入 1.剪刀 2.石头 3.布" << endl;
    cout << "请输入您的选项1-3" << endl;

    cin >> player1;
    cout << "您出的是" << player1 << endl;

    srand((unsigned int)time(NULL));//随机数种子，保证每次运行程序时生成的随机数都不同。
    computer=rand()%3+1;//生成1-3的随机数，代表电脑出的是石头、剪刀、布中的一个。
    cout << "电脑出的是" << computer << endl;

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