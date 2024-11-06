#include <iostream>
using namespace std;

int main()
{
    char name[20];
    cout << "请输入你的名字:" << endl;
    cin.getline(name, 20);
    cout << name << endl;
    return 0;
}