#include <iostream>
#include <string>
using namespace std;

// 结构体数组
struct Student
{
    string name;
    int age;
    int score;
};

int main()
{
    // 1.创建结构体数组
   struct Student stuArry[3] = {
        {"张三", 18, 90},
        {"李四", 19, 80},
        {"王五", 20, 70}};

    // //2.用点访问成员
    // Student stuArry[3];
    // stuArry[0].name = "张三"; // 用点访问成员
    // stuArry[0].age = 18;
    // stuArry[0].score = 90;

    // 遍历结构体数组
    for (int i = 0; i < 3; i++)
    {
        cout << " 姓名：" << stuArry[i].name
             << " 年龄：" << stuArry[i].age
             << " 分数：" << stuArry[i].score
             << endl;
    }

    system("pause");
    return 0;
}