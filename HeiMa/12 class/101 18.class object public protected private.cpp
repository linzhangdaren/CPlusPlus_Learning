#include <iostream>
#include <string>
using namespace std;

// public    公共权限 类内访问 类外访问
// protected 保护权限 类内访问 类外不可访问
// private   四有权限 类内访问 类外不可访问
class Person
{
public:            // 公共权限
    string m_Name; // 姓名

protected:        // 保护权限
    string m_Car; // 汽车

private:            // 私有权限
    int m_Password; // 银行卡密码

public:
    void func()
    {
        m_Name = "张三";
        m_Car = "拖拉机";
        m_Password = 123456;
    }
};

int main()
{
    Person p1;              // 实例化对象
    p1.m_Name = "李四";     // 公共权限类内访问
    p1.m_Car = "奔驰";      // 保护权限类内访问
    p1.m_Password = 123456; // 私有权限类内访问

    system("pause");
    return 0;
}