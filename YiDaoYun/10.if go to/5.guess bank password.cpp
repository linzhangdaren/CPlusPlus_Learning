#include <iostream>
using namespace std;

int main()
{
    int old_password;
    int new_password = 100000; // 初始化 new_password 从 100000 开始
    cout << "请输入一个密码(6位数字):" << endl;
    cin >> old_password;

    // 检测密码是否为6位数字
    while (old_password < 100000 || old_password > 999999)
    {
        cout << "密码必须为6位数字,请重新输入:" << endl;
        cin >> old_password;
    }

    cout << "按任意键,开始破解密码" << endl;
    cin.ignore(); // 清除输入缓冲区
    cin.get();    // 等待用户按键

guess:
    if (new_password == old_password)
    {
        cout << "恭喜你猜对了!" << endl;
        cout << "新密码为:" << new_password << endl;
        cout << "按任意键退出" << endl;
        system("pause");
    }
    else
    {
        new_password++;
        goto guess;
    }

    return 0;
}
