#include <iostream>
using namespace std;

int main()
{
    cout << "我生成了1-100之间的随机数，你猜是多少？" << endl;
    int a = 10;
    cout << "请输入你的猜测：" << endl;
    int b;
    cin >> b;
    cout << "你第一次猜测的数是：" << b << endl;
    int c = 1;
    while (a != b)
    {
        c++;
        if (a > b)
        {
            cout << "你猜的数太小了！" << endl;
            cout << "请输入你的猜测：" << endl;
            cin >> b;
        }
        else
        {
            cout << "你猜的数太大了！" << endl;
            cout << "请输入你的猜测：" << endl;
            cin >> b;
        }
    }
    cout << "你一共猜了" << c << "次。" << endl;
    cout << "恭喜你，猜对了！" << endl;

    return 0;
}