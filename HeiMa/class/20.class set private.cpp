#include <iostream>
#include <string>
using namespace std;

class Person
{
private:
    string m_Name = ""; // 姓名    可读可写
    int m_Age = 0;      // 年龄        只读
    string m_Idol = ""; // 偶像    只读写

public:
    // 设置姓名
    void setName(string name)
    {
        m_Name = name;
        cout << "姓名已设置为:" << m_Name << endl;
    }
    // 获取姓名
    string getName()
    {
        return m_Name;
    }

    // 设置年龄
    void setAge(int age)
    {
        m_Age = age;
    }
    // 设置偶像
    void setIdol(string idol)
    {
        m_Idol = idol;
    }
    // 输出所有信息的函数
    void show()
    {
        cout << "姓名：" << m_Name
             << " 年龄：" << m_Age
             << " 偶像：" << m_Idol
             << endl;
    }
};

int main()
{
    Person p;
    p.setName("zph");
    cout << p.getName() << endl;
    p.show();

    system("pause");
    return 0;
}