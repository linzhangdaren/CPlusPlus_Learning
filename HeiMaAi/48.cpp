#include <iostream>
using namespace std;

int main()
{
    enum Color
    {
        RED,
        YELLOW,
        BLUE
    };

    int num;
    cout << "您最喜欢的颜色是:0.红色 1.黄色 2.蓝色" << endl;
    cout << "请输入您的选择后按回车/Enter键" << endl;
    cin >> num;
    switch (num)
    {
    case RED:
        cout << "您最喜欢的颜色是红色" << endl;
        break;
    case YELLOW:
        cout << "您最喜欢的颜色是黄色" << endl;
        break;
    case BLUE:
        cout << "您最喜欢的颜色是蓝色" << endl;
        break;
    default:
        cout << "输入有误,不知道你喜欢什么颜色" << endl;
    }

    return 0;
}