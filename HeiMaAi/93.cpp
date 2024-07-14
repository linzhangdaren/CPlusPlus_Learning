#include <iostream>
using namespace std;

// 查询函数
void query_money(string *name, int *money)
{
    cout << "---------查询余额---------" << endl;
    cout << *name << ",您好,您的余额为:" << *money << "元" << endl;
}
// 存款函数
void save_money(string *name, int *money, int num)
{
    cout << "---------存款---------" << endl;
    *money += num;
    cout << *name << ",您好,您已存入" << num << "元" << endl;
    cout << "您的余额为 : " << *money << "元" << endl;
}
// 取款函数
void get_money(string *name, int *money, int num)
{
    cout << "---------取款---------" << endl;
    *money -= num;
    cout << *name << ",您好,您已取出" << num << "元" << endl;
    cout << "您的余额为 : " << *money << "元" << endl;
}
// 菜单函数
int menu(string *name)
{
    cout << "---------欢迎来到ATM系统---------" << endl;
    cout<<""<<*name<<",您好"<<endl;
    cout << "请选择您要进行的操作:" << endl;
    cout << "1.查询余额" << endl;
    cout << "2.存款" << endl;
    cout << "3.取款" << endl;
    cout << "4.退出" << endl;
    int num;
    cin >> num;
    return num;
}

int main()
{
    // 输入用户姓名
    string name;
    cout << "请输入您的姓名:" << endl;
    cin >> name;

    int *money =new int;
    *money = 1000;      

    // 循环
    int is_run = true;
    while (is_run)
    {
        int select_num = menu(&name);
        switch (select_num)
        {
        case 1:
            query_money(&name, money);
            break;

        case 2:
            int num_forSaveMoney;
            cout << "请输入您要存入的金额:" << endl;
            cin >> num_forSaveMoney;
            save_money(&name, money, num_forSaveMoney);
            break;

        case 3:
            int num_forGetMoney;
            cout << "请输入您要取出的金额:" << endl;
            cin >> num_forGetMoney;
            get_money(&name, money, num_forGetMoney);
            break;

        default:
            cout << "退出成功" << endl;
            is_run = false;
        }
    }
    delete money;
    return 0;
}