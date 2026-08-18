#include <iostream>
using namespace std;

int main()
{

    // 猜数字游戏 范围1-10 一共3次机会
    int num = 0;
    int guessnum;
    cout << "请输入第一次猜想的数字：";
    cin >> guessnum;
    if (guessnum == num)
    {
        cout << "恭喜你，第一次就猜对了！" << endl;
    }
    else
    {
        cout << "很遗憾，第一次猜错了！" << endl;
        cout << "请输入第二次猜想的数字：" << endl;
        cin >> guessnum;
        if (guessnum == num)
        {
            cout << "恭喜你，第二次就猜对了！" << endl;
        }
        else
        {
            cout << "很遗憾，第二次猜错了！" << endl;
            cout << "请输入第三次猜想的数字：" << endl;
            cin >> guessnum;
            if (guessnum == num)
            {
                cout << "恭喜你，第三次就猜对了！" << endl;
            }
            else
            {
                cout << "很遗憾，第三次猜错了！" << endl;
                cout << "很遗憾，你没有猜对！正确答案是:" << num << endl;
            }
        }
    }
}