#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    int money = 10000;
    int workers;
    for (int id = 1; id <= 20; id++)
    {

        if (money <= 0)
        {
            // 没钱了一切免谈直接结束
            cout << "工资发完了,等下月吧!" << endl;
            break;            
        }

        int performance = rand() % 10 + 1;
        if (performance < 5)
        {
            // 绩效不达标么有工资
            cout << "员工" << id << "的绩效分是" << performance << "分，不发工资" << endl;
            cout << "------------------------------------" << endl;
            continue;
        }
        // 剩下的才是能发的
        money -= 1000;
        cout << "员工" << id << "领取工资" << 100 << "元" << endl;
        cout << "账户余额为:" << money << "元" << endl;
        cout << "------------------------------------" << endl;
    }
    return 0;
}