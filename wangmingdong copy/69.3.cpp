#include <iostream>
using namespace std;

int main()
{
    // 从键盘获取30个成绩,然后计算平均分
    cout << "请输入这参加考试的总人数:" << endl;
    int num;//总人数
    cin >> num;
    cout << "这次一共有" << num << "人参加了考试" << endl;
    cout<<"------------------------"<<endl;
    cout << "请输入每个人的总成绩" << endl;

    int scores[num];//这里可以为常量表达式但这种变量写法是错误的 以后看看怎么处理

    for (int i = 0; i <num; i++)
    {
        cout << "请输入第" << i+1 << "个学生的总成绩：";
        cin >> scores[i];
    }
    int sum = 0;
    for (int i = 0; i < num; i++)
    {

        sum += scores[i];
    }
    cout << "平均分为:" << sum/num << endl;

    return 0;
}