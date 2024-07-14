#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    // 生成随机数
    srand((unsigned)time(NULL));
    int randnum = rand() % 100 + 1;
    cout << "随机数为：" << randnum << endl;
    int guessnum;
    int usernum[10];
    for (int i = 0; i < 10; i++)
    {
        cout << "请输入第" << i + 1 << "次猜测的数字：";
        cin >> usernum[i];
    }

    int result = 0;
    for (int i = 0; i < 10; i++)
    {
        if (usernum[i] == randnum)
        {
            result++;
        }
    }
    cout << "你猜对了" << result << "次" << endl;
    return 0;
}