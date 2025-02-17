#include <iostream>
#include <string>
using namespace std;

struct Student
{
    string name;
    int age;
    int score;
};

// 值结构体传递
void printStudent(struct Student stu)
{
    stu.age = 100;
    cout << "这个是值函数修改结构体变量参数"
         << " 姓名：" << stu.name
         << " 年龄：" << stu.age
         << " 分数：" << stu.score
         << endl;
}

// 指针结构体传递
void printStudent2(struct Student *p_stu)
{
    p_stu->age = 200;
    cout << "这个是指针函数修改结构体变量参数"
         << " 姓名: " << p_stu->name
         << " 年龄: " << p_stu->age
         << " 分数: " << p_stu->score
         << endl;
}

int main()
{
    // 定义学生结构体变量
    struct Student stu = {"张三", 18, 90};
    // 用函数输出未改之前的结构体变量参数
    // 1.值传递
    printStudent(stu);

    cout << "这个是main函数修改结构体变量参数"
         << " 姓名：" << stu.name
         << " 年龄：" << stu.age
         << " 分数：" << stu.score
         << endl;

    // 2.指针传递
    printStudent2(&stu);

    cout << "这个是main函数修改结构体变量参数"
         << " 姓名：" << stu.name
         << " 年龄：" << stu.age
         << " 分数：" << stu.score
         << endl;
    // 指针函数修改结构体变量参数

    system("pause");
    return 0;
}