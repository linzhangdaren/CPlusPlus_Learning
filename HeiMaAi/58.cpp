//猜数字游戏 1-100内的随机数
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

//初始化随机数种子
//time(0)获取当前时间，rand()生成随机数，%100+1将随机数限制在1-100之间
int main()
{
// 初始化随机数生成器
 srand(time(0));
// 生成一个0-99的随机数
    int num = rand() % 100 + 1;
    cout<< "随机数是：" << num << endl;
// 用户猜测的数字
    int guessnum;    
    //提示用户输入猜测的数字
    cout << "请输入1-100之间的数字：" << endl;
    //获取用户输入的数字
    cin >> guessnum;
    //猜错提示大小,猜对后用if把for循环的false改成true跳出循环
    for (bool a=true;a==true;)
    {
        if(num==guessnum){
            cout<< "恭喜你，猜对了！" << endl;
            a=false;
        }
        if (num>guessnum)
        {
            cout<< "猜小了！" << endl;
            cout<<"请重新输入"<<endl;
            cin>>guessnum;
        }
        else if (num<guessnum)
        {
            cout<< "猜大了！" << endl;
            cout<<"请重新输入"<<endl;
            cin>>guessnum;
        }               

    }
    return 0;
}