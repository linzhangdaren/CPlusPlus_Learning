#include <iostream>
using namespace std;

int main()
{

    // 如果小美喜欢我 我就表白
    //   如果天气好 去踏青
    //   否则 去看电影
    // 否则去追求小新
    int love;
    int weather;
    cout << "小美你喜欢我吗?(1喜欢 0不喜欢)" << endl;
    cin >> love;

    if (love == 1)
    {
        cout << "我也喜欢你" << endl;
        cout << "请输入今天的天气(1晴天 2下雨)" << endl;
        cin >> weather;
        if (weather == 1)
        {
            cout << "天气真好，我们去踏青吧" << endl;
        }
        else
        {
            cout << "天气不好，我们去电影院吧" << endl;
        }
    }
    else
    {
        cout << "很伤心我去追求小新了" << endl;
    }

    return 0;
}