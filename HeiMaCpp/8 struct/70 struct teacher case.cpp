#include <iostream>
#include <string>
#include <windows.h> // 包含设置控制台编码所需的头文件 防止乱码

using namespace std;

// 一个老师带五个学生,一共三个老师
// 老师姓名:老师_A/B/C
// 学生姓名:学生_A/B/C/D/E

// 学生结构体
struct Student
{
    // 姓名
    string name;
    // 分数
    int score;
};

// 老师结构体
struct Teacher
{
    // 姓名
    string name;
    // 学生数组
    Student sArray[5];
};

// 赋值函数
void allocateSpace(struct Teacher tArray[], int len)
{
    string nameSeed = "ABCDE";
    for (int i = 0; i < len; i++)
    {
        // 老师姓名编号赋值
        tArray[i].name = "老师_";
        tArray[i].name += nameSeed[i];
        // 学生姓名编号姓名 分数赋值
        for (int j = 0; j < 5; j++)
        {
            // 姓名
            tArray[i].sArray[j].name = "学生_";
            tArray[i].sArray[j].name += nameSeed[j];
            // 分数
            tArray[i].sArray[j].score = 60;
        }
    }
}

// 遍历函数
void printInfo(struct Teacher tArray[], int len)
{
    for (int i = 0; i < len; i++)
    {
        cout << "老师姓名：" << tArray[i].name << endl;
        for (int j = 0; j < 5; j++)
        {
            cout << "\t学生姓名：" << tArray[i].sArray[j].name << " 分数：" << tArray[i].sArray[j].score << endl;
        }
    }
}

int main()
{
    // 设置控制台编码为UTF-8
    SetConsoleOutputCP(CP_UTF8);

    // 创建3名老师
    struct Teacher tArray[3];
    // 函数赋值
    int len = sizeof(tArray) / sizeof(tArray[0]);
    allocateSpace(tArray, len);
    // 遍历函数
    printInfo(tArray, len);
    // 保持窗口
    system("pause");

    return 0;
}
