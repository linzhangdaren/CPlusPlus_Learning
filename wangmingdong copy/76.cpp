#include <iostream>
using namespace std;

int main()
{
    // 记录5个学生的语数英成绩
    float yuwen = 0;
    float shuxue = 0;
    float yingyu = 0;

    int scores[5][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9},
        {10, 11, 12},
        {13, 14, 15}};

    // 输出一个做测试: cout << scores[0][0] << endl;

    // 计算每个科目的总成绩和平均成绩，并输出结果。
    cout << "语文成绩为:" << endl; // 输出标题
    for (int i = 0; i < 5; i++)
    {
        cout << scores[i][0] << endl; // 输出语文成绩
    }

    cout << "语文总成绩为:" << endl;
    for (int i = 0; i < 5; i++)
    {
        yuwen += scores[i][0]; // 计算语文总成绩
    }
    cout << yuwen << endl;

    cout << "语文的平均成绩为:" << endl; // 输出标题
    cout << yuwen / 5 << endl;           // 计算语文平均成绩并输出结果。
    cin.get();                           // 暂停程序，以便查看结果。
    return 0;
}