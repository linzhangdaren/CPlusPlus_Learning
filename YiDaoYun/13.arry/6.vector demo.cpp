#include <iostream>
#include <vector>
using namespace std;

// 1,定一个vector数组 动态添加学生信息
//以后尽量直接固定数组大小，不用动态添加元素 浪费性能

int main()
{
    vector<int> stu;
    for (int i = 0; i < 100; i++)
    {
        int score = 0;
        cout << "请录入" << i + 1 << "号学生的成绩 : ";
        cin >> score;
        if (score == 0)
        {
            break;
        }
        stu.push_back(score);
    }
    cout << endl;
    // 2,遍历vector数组
    // for (int i = 0; i < stu.size(); i++)
    // {
    //     cout << "第" << i + 1 << "个学生的成绩为 : " << stu[i] << endl;
    // }

    int num = 1;
    for (auto i : stu)
    {
        cout << num << "号学生的成绩为 : " << i << endl;
        num++;
    }
    return 0;
}