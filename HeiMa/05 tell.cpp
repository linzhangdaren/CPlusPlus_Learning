#include <iostream>
#include <string>
using namespace std;
#define Max 1000

void showMenu()
{
    cout << "***************************" << endl;
    cout << "*****  1、添加联系人  *****" << endl;
    cout << "*****  2、显示联系人  *****" << endl;
    cout << "*****  3、删除联系人  *****" << endl;
    cout << "*****  4、查找联系人  *****" << endl;
    cout << "*****  5、修改联系人  *****" << endl;
    cout << "*****  6、清空联系人  *****" << endl;
    cout << "*****  0、退出通讯录  *****" << endl;
    cout << "***************************" << endl;
}

// 联系人结构体
struct Person
{
    string m_Name;
    int m_Sex; // 1男 2女
    int m_Age;
    string m_Phone;
    string m_Addr;
};

// 通讯录结构体
struct Addressbooks
{
    // 通讯录中保存的联系人数组
    struct Person personArray[Max];
    // 通讯录中当前保存的联系人数
    int m_Size;
};

int main()
{
    while (true)
    {
        // 菜单调用
        showMenu();

        // 菜单选择
        int select = 0;
        cin >> select;

        switch (select)
        {
        case 1: // 添加联系人
            break;
        case 2: // 显示联系人
            break;
        case 3: // 删除联系人
            break;
        case 4: // 查找联系人
            break;
        case 5: // 修改联系人
            break;
        case 6: // 清空联系人
            break;
        case 0: // 退出通讯录
            cout << "欢迎下次使用" << endl;
            system("pause");
            return 0;
            break;

        default:
            break;
        }
    }

    return 0;
}