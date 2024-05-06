// 腾讯账号密码登录逻辑判断不能用if来判断
// 用且才可以要不会被循环破解一个一个测试
#include <iostream>
using namespace std;


int main()
{

    int id = 123;     // 假设账号为123
    int password = 1; // 假设密码为1
    int vfcode = 2;   // 假设验证码为2

    

    if (vfcode == 1) // 验证码为1时，需要输入验证码进行验证
    {

        if (id == 123 && password == 1) // 同时满足账号为123且密码为1的条件时，登录成功
        {
            cout << "登录成功！" << endl; // 输出登录成功的提示信息
        }
        else
        {                                             // 否则，登录失败
            cout << "账号或密码错误！请重试" << endl; // 输出登录失败的提示信息
        }                                             // 程序结束
    }
    else
    {
        cout << "验证码错误" << endl;
    }


