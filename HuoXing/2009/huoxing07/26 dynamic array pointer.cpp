#include <iostream>
#include <string>
using namespace std;

// 动态数组

int main()
{
    // 输入学生人数
    cout << "请输入学生人数：";
    int Num;
    cin >> Num;
    string *p = new string[Num];
    // 输入学生姓名
    cout << "请输入学生姓名：";
    cin >> p[0];
    cout << p[0] << endl;
    cout << p << endl;
    cout << *p << endl;

    return 0;
}