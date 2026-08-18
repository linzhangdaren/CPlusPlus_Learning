#include <iostream>
using namespace std;

int main()
{

    int ticket = 1;        // 假设已经购买了车票
    int knife_lenght = 11; // 假设刀的长度为11cm

    if (ticket == 1)
    {

        if (knife_lenght > 10)
        {
            cout << "禁止违禁品，提示：刀超过10cm禁止入内" << endl;
        }
        else
        {
            cout << "验证通过，请您进入" << endl;
        }
    }
    else
    {
        cout << "请先购买车票！" << endl;
    };

    return 0;
}