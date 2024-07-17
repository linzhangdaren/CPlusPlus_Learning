#include <iostream>
#include <string>
using namespace std;
const int MAX = 1000; // 最大联系人个数

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

// 设计联系人结构体
struct Person
{
    string m_Name;
    string m_Sex;
    int m_Age;
    string m_Phone;
    string m_Addr;
};

// 设计通讯录结构体
struct Addressbooks
{
    // 通讯录中保存的联系人数组
    Person PersonArray[MAX];
    // 通讯录当前记录联系人个数
    int m_Size;
};

// 添加联系人函数
void addPerson(Addressbooks *abs)
{
    // 判断通讯录是否已满，如果满了就不再添加
    if (abs->m_Size == MAX)
    {
        cout << "通讯录已满，无法添加" << endl;
        return;
    }
    else
    {
        // 添加联系人
        cout << "请输入姓名:" << endl;
        cin >> abs->PersonArray[abs->m_Size].m_Name;
    }
};

int main()
{
    // 创建通讯录结构体变量并初始化
    Addressbooks abs;
    abs.m_Size = 0;

    // 创建选择变量
    int select = 0;

    // 循环体
    while (true)
    {
        // 菜单调用
        showMenu();
        // 用户输入选择
        cout << "请输入您的选择:" << endl;
        cin >> select;
        // 根据用户选择，执行相应操作:
        switch (select)
        {
        case 1:
            cout << "添加联系人" << endl;
            addPerson(&abs);
            break;

        case 2:
            cout << "显示联系人" << endl;
            break;

        case 3:
            cout << "删除联系人" << endl;
            break;

        case 4:
            cout << "查找联系人" << endl;
            break;

        case 5:
            cout << "修改联系人" << endl;
            break;

        case 6:
            cout << "清空联系人" << endl;
            break;

        case 0:
            cout << "退出通讯录" << endl;
            cout << "欢迎下次使用!" << endl;
            system("pause");

            return 0; // 退出系统
            break;

        default:
            cout << "输入有误，请重新输入" << endl;
            break;
        }
    }

    return 0;
}

// 想象你手里拿着一个电子通讯录，它就像是一个高科技的名片盒，里面可以存很多张电子名片。每张名片上都记着一个人的信息，比如他叫什么名字、是男是女、多大年纪、电话是多少、住在哪里。

// 在你的代码里，`Addressbooks` 就像是这个名片盒，而 `PersonArray` 就是盒子里用来存放名片的格子。每个格子里都可以放进一张 `Person` 这样的电子名片。

// 现在，你手里有一个叫 `abs` 的东西，它其实不是真的手指，而是一个指向你名片盒的指针。通过这个指针，你可以告诉电脑：“嘿，去这个名片盒里找东西或者放东西。”

// - 当你看到 `abs->m_Size`，这就像是你数一数盒子里现在有多少张名片。`m_Size` 就是告诉你现在用了多少个格子来放名片。

// - 当你写下 `abs->PersonArray[abs->m_Size].m_Name` 这样的代码，这就像是你告诉电脑：“去我的名片盒里，找到下一个空格子，然后把这个人的名字写上去。”这里，`PersonArray` 是指名片盒里的所有格子，`[abs->m_Size]` 是指下一个空格子，而 `.m_Name` 就是格子上用来写名字的地方。

// 你的代码里还有一个 `main` 函数，它就像是通讯录的开关和操作界面。当你打开通讯录，它会显示一个菜单给你，让你选择是添加名片、显示所有名片、删除名片、查找名片、修改名片，还是清空或者退出通讯录。

// - `showMenu()` 就是把菜单显示出来的功能，告诉你有哪些选项。
// - `addPerson(&abs)` 是当你选择添加名片时，电脑会调用这个功能，让你输入新名片的信息。

// 整个程序就是一个循环，一直等你告诉它你要退出。当你选择退出（比如选了0），程序就会说再见，然后结束。

// 希望这次的解释更符合你的口味，如果还有不清楚的地方，尽管问我。
