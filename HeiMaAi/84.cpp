#include <iostream>
using namespace std;

int main()
{
    struct student
    {
        string name;
        int age;
    };
    student a={"张三",18};
    student *p = &a;
//指针结构体不能用.得用->符号
    cout << p->name << endl;
    cout << p->age << endl;

    return 0;
}