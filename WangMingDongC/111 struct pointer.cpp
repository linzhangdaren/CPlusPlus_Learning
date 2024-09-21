#include <iostream>
using namespace std;
// 结构体指针
struct stu
{
    int num;
    float score;
};

int main()
{
    struct stu boy;
    struct stu *p; // 定义一个结构体指针
    p = &boy;

    // 通过结构体赋值
    boy.num = 100;
    boy.score = 99.5;

    // 通过结构体指针赋值
    // //不常用写法

    // (*p).num = 200;
    // (*p).score = 99.8;

    // 常用写法
    p->num = 200;
    p->score = 99.8;

    return 0;
}