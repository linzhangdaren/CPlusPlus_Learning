#include <iostream>
using namespace std;

int main()
{

    cout << "开始" << 5 << "天的减肥:" << endl;
    cout << endl;
    int day = 1;
    int day_bodynum = 2;
    int bodysum = 0;
    while (day <= 5)
    {
        cout << "今天是第" << day << "天" << endl;
        cout << endl;
        // 定义运动次数
        int sportnum = 1;
        while (sportnum <= 3)
        {
            cout << "做第" << day << "天的第" << sportnum << "个俯卧撑" << "    ";
            cout << "跑第" << day << "天的第" << sportnum << "个400米" << endl;
            sportnum++;
        }
        cout << endl;
        cout << "体重减了" << day_bodynum << "斤" << endl;
        cout << "累计减肥" << (bodysum += day_bodynum )<< "斤" << endl;//这里最好先累加再输出或者加括号要不报错!
        cout << "--------------------------------" << endl;

        day++;
    }

    return 0;
}