#include <iostream>
#include <string>
using namespace std;

int main()
{
    int age = 0;
    cout << "请输入你的年龄：" << endl; //"endl"表示换行符，表示输出后换行。
    cin >> age; 
                                          
    // if (age < 18)
    // {
    //     cout << "你的年龄未满18岁，不能进入该网站！" << endl; //"endl"表示换行符，表示输出后换行。
    // }
    // else
    // {
    //     cout << "你的年龄已满18岁，可以进入该网站！" << endl;
    // }

    if (age < 18 && age > 25)
    {
        cout << "您的年龄已满18岁，可以进入该网站！" << endl;
    }
    else
    {
        cout << "你的您领不符合，不能进入该网站！" << endl;
    }

    system("pause");
    return 0;
}
