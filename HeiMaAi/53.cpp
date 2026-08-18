#include <iostream>
using namespace std;

int main()
{
    int day = 1;
    while (day <= 5)
    {
        cout << "今天是第" << day << "天,我喜欢你!" << endl;
        day++;

        int flower = 1;
        while (flower <= 3)
        {
            cout << "送你" << flower << "朵玫瑰" << endl;
            flower++;
        }
    }
    return 0;
}