#include <iostream>
using namespace std;
// 空指针可以调用成员函数(成员函数不包含成员变量),不能调用成员变量
//  用if和this判断本身是否为空指针 如果是直接中段可以保障程序不崩溃

class Person
{
public:
    int m_Age;
    void ShowClassName()
    {
        cout << "这是Person类,啥也没有就有这一句话" << endl;
    }

    void ShowPersonAge()
    {
        if (this == NULL)
        {
            return;
        }
        // 这个函数调用了成员变量不再支持NULL指针使用会崩溃的
        cout << "年龄为:" << m_Age << endl;
    }
};

int main()
{
    Person *p = NULL;
    p->ShowClassName(); // 空指针可以调用成员函数
    // p->ShowPersonAge();//空指针不能调用成员变量,除非有if (this == NULL)

    return 0;
}