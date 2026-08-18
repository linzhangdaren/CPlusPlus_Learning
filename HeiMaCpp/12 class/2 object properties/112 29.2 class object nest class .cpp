#include <iostream>
#include <string>
using namespace std;
// 是先有手机对象呢?还是先有人对象? 析构相反
// 先有手机对象，再有人对象
// 好比先有砖后有房 先有四肢后有人
class Phone
{
public:
    // 成员变量
    string m_PName; // 手机型号
    // 构造函数
    Phone(string pName)
    {
        m_PName = pName;
        cout << "Phone的构造函数调用" << endl;
    }
};

class Person
{
public:
    // 成员变量
    string m_Name; // 姓名
    Phone m_Phone; // 手机对象
    // 构造函数
    Person(string name, string pName) : m_Name(name), m_Phone(pName)
    { // m_Phone(pName)相当于Phone m_Phone(pName)
        cout << "Person的构造函数调用" << endl;
    };
};

void test01()
{
    Person p("张三", "苹果MAX");
    cout << p.m_Name << "拿着" << p.m_Phone.m_PName << endl;
}
// 主函数
int main()
{
    test01();
    return 0;
}