#include <iostream>
using namespace std;
//数组 录入学生编号
int main()
{
    cout << "请录入学生的编号,按0键结束录入" << endl;
    int stuArray[100] = {0};
    for (int i = 0; i < 100; i++)
    {
        cout << "请录入第" << i + 1 << "学生的编号:";
        cin >> stuArray[i];
        if (stuArray[i] == 0)
        {
            // 列出已录入的学生信息
            system("cls"); // 清屏
            cout << "已录入的学生信息:" << endl;
            for (int j = 0; j < i; j++)
            {
                cout << "第" << j + 1 << "学生的编号为:" << stuArray[j] << endl;
            }
            break;
        }
    }
    return 0;
}