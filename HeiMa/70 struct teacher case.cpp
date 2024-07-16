#include <iostream>
#include <string>
using namespace std;
// 一个老师带五个学生,一共三个老师
// 老师姓名:teacher_A/B/C
// 学生姓名:student_A/B/C/D/E

// 老师结构体
struct Student
{
    string name;
    int score;
};

// 学生结构体
struct Teacher
{
    string name;
    struct Student sArry[5];
};

// 给老师和学生赋值的函数
void setTeacher(struct Teacher tArry[], int len)
{
    string nameSeed = "ABCDE";
    for (int i = 0; i < len; i++)
    {
        tArry[i].name = "teacher_";
        tArry[i].name += nameSeed[i];

        for (int j = 0; j < 5; j++)
        {
            tArry[i].sArry[j].name = "student_";
            tArry[i].sArry[j].name += nameSeed[j];

            tArry[i].sArry[j].score = 60;
        }
    }
};

void printInfo(struct Teacher tArry[], int len)
{
    for (int i = 0; i < len; i++)
    {
        cout << "老师姓名:" << tArry[i].name << endl;
        for (int j = 0; j < 5; j++)
        {
            cout << "\t学生姓名:" << tArry[i].sArry[j].name
                 << "分数:" << tArry[i].sArry[j].score
                 << endl;
        }
    }
};

int main()
{
    // 创建3名老师的数组
    struct Teacher tArry[3];

    // 通过函数给3名老师的信息赋值,并给老师所带的学生信息赋值
    int len = sizeof(tArry) / sizeof(tArry[0]);
    setTeacher(tArry, len);
    // 打印老师及所带的学生信息
    printInfo(tArry, len);

    system("pause");
    return 0;
}