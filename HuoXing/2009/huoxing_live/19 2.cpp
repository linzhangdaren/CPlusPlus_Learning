#include <iostream>
using namespace std;

struct student
{
    string name;
    short score;
};

struct teacher
{
    string name;
    struct student sArry[6];
};

void Evaluate(struct teacher tArry[], int length) // 赋值
{
    string tname = "ABCD";
    string sname = "abcdef";
    for (int i = 0; i < length; i++)
    {
        tArry[i].name = "Teacher_";
        tArry[i].name += tname[i];

        for (int j = 0; j < 6; j++)
        {
            tArry[i].sArry[j].name = "Student_";
            tArry[i].sArry[j].name += sname[j];
            tArry[i].sArry[j].score = 90;
        }
    }
}

void PrintValue(struct teacher tArry[], int length) // 打印
{
    for (int i = 0; i < length; i++)
    {
        cout << tArry[i].name << endl;
        for (int j = 0; j < 6; j++)
        {
            cout << tArry[i].sArry[j].name << endl;
        }
        cout << endl;
    }
}

int main()
{
    teacher tArry[4];
    Evaluate(tArry, 4);
    PrintValue(tArry, 4);
    return 0;
}