#include <iostream>
#include <string>
using namespace std;
// 结构体嵌套

struct Student // 被嵌套的结构体要在前面才行不然找不到它
{
    string name;
    int age;
    int score;
};

struct Teacher
{
    string name;
    int id;
    int age;
    struct Student stu; // 结构体嵌套学生结构体
};

int main()
{
    Teacher t; // 创建一个老师
    t.name = "张老师";
    t.age = 30;

    t.stu.name = "鹏华"; // 访问嵌套结构体中的学生成员
    t.stu.age = 18;

    cout << "我是" << t.name << "我今年" << t.age << "岁了" << endl;

    cout << "我的学生是" << t.stu.name << "他今年" << t.stu.age << "岁了" << endl;

    system("pause");
    return 0;
}