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

// 添加联系人
void addPerson(struct Addressbooks *abs)
{
    // 判断通讯录是否已满
    if (abs->m_Size == Max)
    {
        cout << "通讯录已满，无法添加" << endl;
        return;
    }
    else
    {
        // 1、姓名
        string name;
        cout << "请输入姓名：" << endl;
        cin >> name;
        abs->personArray[abs->m_Size].m_Name = name;
        // 2、性别
        int sex = 0;
        cout << "请输入性别：" << endl;
        cout << "1 -- 男" << endl;
        cout << "2 -- 女" << endl;

        while (true)
        {
            cin >> sex;
            if (sex == 1 || sex == 2) // 判断是否输入有误
            {
                abs->personArray[abs->m_Size].m_Sex = sex;
                break;
            }
            cout << "输入有误，请重新输入" << endl;
        }

        // 3、年龄
        cout << "请输入年龄：" << endl;
        cin >> abs->personArray[abs->m_Size].m_Age;
        // 4、电话
        cout << "请输入电话：" << endl;
        cin >> abs->personArray[abs->m_Size].m_Phone;
        // 5、地址
        cout << "请输入地址：" << endl;
        cin >> abs->personArray[abs->m_Size].m_Addr;

        // 更新通讯录人数自增
        abs->m_Size++;
        cout << "添加成功" << endl;
    }
};

int main()
{
    // 创建通讯录结构体变量
    Addressbooks abs;
    // 初始化通讯录当前人员个数
    abs.m_Size = 0;

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
            addPerson(&abs);
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