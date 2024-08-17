#include <iostream>
using namespace std;
// 类受保护如何调用呢? 在类中定义一个函数，函数中调用受保护的成员
// 在类中的函数可以调用任意权限的成员无视public protected private
// 一般用set和get命名此函数

class Person
{
private:
    float money;
    float balance; // 账户余额
    int password;  // 密码

public:
    // 构造函数
    Person()
    {
        money = 0;
        balance = 0;
        password = 0;
    }
    // set设置存钱函数
    void setMoney(float money) // 设置函数
    {
        this->money = money; // this指针指向当前对象
        cout << "存入金额为:" << this->money << endl;
        this->balance += this->money;
        cout << "账户余额为:" << this->balance << endl;
        cout << "------------------------" << endl;
    }
    // get获取余额函数
    void getMoney()
    {
        cout << "查询到您的余额为:" << this->balance << endl;
        cout << "------------------------" << endl;
    }
    // 设置密码
    void setPassword(int password)
    {
        this->password = password;
        cout << "您的密码为:" << this->password << endl;
        cout << "请妥善保管您的密码" << endl;
        cout << "------------------------" << endl;
    }
    // 设置新密码函数
    void setNewPassword(int oldPassword, int newPassword)
    {
        if (this->password == oldPassword)
        {
            this->password = newPassword;
            cout << "密码修改成功" << endl;
            cout << "-------------------------" << endl;
        }
        else
        {
            cout << "密码错误" << endl;
            cout << "------------------------" << endl;
        }
    }
};

int main()
{
    Person p;
    // 设置函数
    p.setMoney(1000);
    // 获取函数
    p.getMoney();
    // 设置密码
    p.setPassword(123456);
    // 重新设置新密码
    p.setNewPassword(123456, 654321); // 旧密码123456 新密码654321

    return 0;
}