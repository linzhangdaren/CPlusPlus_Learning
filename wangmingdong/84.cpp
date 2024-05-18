#include <iostream>
using namespace std;

int main()
{

    char name[30] = "zhangpenghua";
    cout << "我的名字叫" << name << endl;
    name[0] = '0'; 
    cout<<"我的名字叫"<<name<<endl; 
    return 0;
}