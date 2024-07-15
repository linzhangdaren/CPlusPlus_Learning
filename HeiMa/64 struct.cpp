#include <iostream>
#include <string>
using namespace std;
// 创建学生数据类型
struct Student
{
    string name;
    int age;
    int score;
};

// 通过类型创建具体学生的三种方法:
// 1.无赋值创建 struct Student s1;
// 2.定义时赋值 struct Student s1 = {"张三", 18, 100};
// 3.在定义结构体时顺便创建结构体变量:
// struct Student
// {
//     string name;
//     int age;
//     int score;
// }s3;
// 第三种不常见

int main()
{
    // // 1.无赋值创建
    // struct Student s1;
    // s1.name = "张三";//用点.来访问结构体变量中的成员
    // s1.age = 18;
    // s1.score = 100;
    // cout << "姓名: " << s1.name << " 年龄: " << s1.age << " 分数: " << s1.score << endl;

    // //2.定义时赋值
    // struct Student s2 = {"李四", 19, 99};
    // cout << "姓名: " << s2.name << " 年龄: " << s2.age << " 分数: " << s2.score << endl;

    system("pause");
    return 0;
}