#include <iostream>
#include <string>
using namespace std;
// 设计学生类
class Student
{
public:
    string m_Name;
    int m_Id;

    void showStudent() // 输出信息
    {
        cout << "姓名:" << m_Name << "\t学号:" << m_Id << endl;
    }

    void setName(string name) // 设置姓名
    {
        m_Name = name;
    }

    void setId(int id) // 设置学号
    {
        m_Id = id;
    }
};
int main()
{
    Student s1;
    s1.m_Name = "张三";
    s1.m_Id = 1001;
    s1.showStudent();

    s1.setName("zph");
    s1.setId(110);
    cout << "改名&ID后" << endl;
    s1.showStudent();
    cout << endl;

    Student s2;
    s2.m_Name = "李四";
    s2.m_Id = 1002;
    s2.showStudent();

    system("pause");
    return 0;
}