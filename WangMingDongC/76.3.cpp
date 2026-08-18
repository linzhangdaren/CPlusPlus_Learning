#include <iostream>
using namespace std;

int main()
{
    // 5个学生3门成绩的记录和运算
    float scores[5][3]{
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9},
        {10, 11, 12},
        {13, 14, 15} // 最后不要逗号这里可不是换行
    };

    // 输出每个人的成绩，然后比大小，输出第一名
    float max = 0;   // 定义变量，用于存储最大的成绩，初始值为0，因为0最小，最大值一定大于0
    int max_num = 0; // 定义变量，用于存储第一名是第几个学生，初始值为0，因为题目中说了有5个学生

    for (int j = 0; j < 5; j++)
    {
        float person = 0; // 定义变量，用于存储每个人的成绩，然后比大小
        for (int i = 0; i < 3; i++)
        {
            person += scores[j][i]; // 计算每个人的成绩，累加到person变量中
        }
        cout << "第" << j + 1 << "号学生的成绩是" << person << endl; // 输出每个人的成绩
        if (person > max)                                            // 如果当前学生的总成绩大于max，则更新max的值
        {
            max = person;
            max_num = j + 1; // 更新max_num的值，记录第一名是第几个学生
        }
    }
    cout << "第一名是" << max_num << "号学生 成绩是" << max << endl; // 输出第一名学生的成绩和编号
    cin.get();
    return 0;
}