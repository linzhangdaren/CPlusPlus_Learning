#include <iostream>
using namespace std;

int main(){

    int num;
    cout << "-------------------------------------" << endl;
    cout<<"河北虚幻引擎科技有限公司人员管理系统1.0:"<<endl;
    cout << "1.添加人员信息"<< endl;
    cout << "2.删除人员信息"<< endl;
    cout << "3.修改人员信息"<< endl;
    cout << "4.查询人员信息"<< endl;
    cout << "5.显示所有人员信息"<< endl;
    cout << "6.设置"<< endl;
    cout << "-------------------------------------" << endl;
    cout << "请输入你的选择，然后按回车"<< endl;
    cin >> num;

    switch (num)
    {
    case 1:
        cout << "1.添加人员信息" << endl; // 添加人员信息代码块
        break;
    case 2:
        cout << "2.删除人员信息" << endl; // 删除人员信息代码块
        break;
    case 3:
        cout << "3.修改人员信息" << endl; // 修改人员信息代码块
        break;
    case 4:
        cout << "4.查询人员信息" << endl; // 查询人员信息代码块
        break;
    case 5:
        cout << "5.显示所有人员信息" << endl; // 显示所有人员信息代码块
        break;
    case 6:
        cout << "6.设置" << endl; // 设置代码块
        break;
    
    default:
        cout << "您输入的有误" << endl; // 无效选择代码块
        break;
    }
    return 0;
}