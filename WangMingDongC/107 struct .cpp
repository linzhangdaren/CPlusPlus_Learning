#include <iostream>
#include <string.h> // 引入string.h头文件，以便使用strcpy()函数
using namespace std;

// 结构体char数组对象的赋值方法
// 一个是通过strcpy()函数进行赋值
// 另一个是通过指针定义进行赋值
struct Student
{
    char name[30]; // char数组
    char *age;     // char指针
};

int main()
{
    Student a;
    strcpy(a.name, "wangmingdong"); // 使用strcpy()函数进行赋值
    a.age = "112128";

    cout << a.name << endl;
    cout << a.age << endl;
    return 0;
}
