#include <iostream>
using namespace std;
#include <string>

// 结构体指针
struct Student
{
    string name;
    int age;
    int score;
};

int main()
{
    // 创建学生结构体变量
    struct Student s = {"张三", 18, 100};
    // 通过指针指向结构体变量
    struct Student *p = &s;
    // 通过指针访问结构体变量中的数据
    cout << "姓名：" << p->name << endl;

    system("pause");
    return 0;
}