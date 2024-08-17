#include <iostream>
#include <string>
using namespace std;
// 链表 list
// 把malloc申请的空间，用指针连接起来，形成链表

// 定义链表节点结构体
struct stu
{
    int num;
    struct stu *next;
};

// 打印菜单函数
void print_menu()
{
    cout << "--------菜单--------" << endl;
    cout << "1.添加学生信息" << endl;
    cout << "2.修改学生信息" << endl;
    cout << "3.查询学生信息" << endl;
    cout << "4.删除学生信息" << endl;
    cout << "5.打印所有学生信息" << endl;
    cout << "6.退出系统" << endl;
    cout << "-------------------" << endl;
}

// 添加学生信息函数
void add_new_student(struct stu **head)
{
    // 1.用malloc申请新的节点 存放学生信息
    struct stu *new_stu = (struct stu *)malloc(sizeof(struct stu));
    // 2.获取学生信息写入新节点
    cout << "请输入学生编号:" << endl;
    cin >> new_stu->num;
    new_stu->next = NULL;
    // 3.将新节点插入链表
    if (*head == NULL)
    {
        *head = new_stu;
    }
    else
    {
        struct stu *p = *head;
        while (p->next != NULL)
        {
            p = p->next;
        }
    }
}

int main()
{
    // 定义变量用来储存链表的头
    struct stu *head = NULL;

    // 1.打印菜单
    print_menu();
    // 2.选择功能
    int option = 0;
    while (1)
    {
        cout << "请输入要执行的功能:" << endl;
        cin >> option;
        switch (option)
        {
        case 1:
            add_new_student(&head);
            break;
            // case 2:
            //     modify_student(head);
            //     break;
            // case 3:
            //     search_student(head);
            //     break;
            // case 4:
            //     delete_student(&head);
            //     break;
            // case 5:
            //     print_student(head);
            //     break;
            // case 6:
            //     free_Link(head); // 释放链表
            return 0;
        default:
            cout << "输入错误，请重新输入" << endl;
        }
    }

    return 0;
}