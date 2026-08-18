#include <iostream>
using namespace std;

int main()
{
    float scores[5][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9},
        {10, 11, 12},
        {13, 14, 15}};
    // 计算每一科目的总成绩和平均成绩，并输出结果。
    for (int j = 0; j < 3; j++)
    {
        float result = 0;
        for (int i = 0; i < 5; i++)
        {
            result += scores[i][j]; // 计算总成绩
        }
        cout << "________________________________________" << endl; // 输出分隔线
        cout << endl;
        cout << "科目" << j + 1 << endl;                 // 输出科目编号
        cout << "全班总成绩为:" << result << endl;       // 输出总成绩
        cout << "全班平均成绩为:" << result / 5 << endl; // 输出平均成绩
    }

    return 0;
}