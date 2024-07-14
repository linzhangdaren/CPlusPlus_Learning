#include <iostream>
#include <string>
using namespace std;

int main()
{

    cout << "请输入您的姓名:" << endl;
    string name;
    cin >> name;

    cout << "请输入您的身高(CM):" << endl;
    float height;
    cin >> height;

    cout << "请输入您的年龄:" << endl;
    int age;
    cin >> age;

    cout << "--------------" << endl;
    cout << "信息输入完成,您的信息如下:" << endl;
    cout << "姓名:" << name << endl;
    cout << "身高:" << height << "CM" << endl;
    cout << "年龄:" << age << "岁" << endl;

    system("pause");
    return 0;
}