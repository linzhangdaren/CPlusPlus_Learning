
#include <iostream>
using namespace std;

int main()
{

    for (int i = 0; i <= 5; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout <<"j的值是："<< j << endl;
        }
        cout <<"现在是第："<< i<<"次循环" << endl;
    }

    system("pause"); // 暂停程序
    return 0;
}