#include <iostream>
using namespace std;

int main ()
{
    cout<<"请输入您的身高(单位：cm)"<<endl; 
    int bodyCm;
    cin>>bodyCm; 

    cout<<"请输入您的私房钱(单位：元)"<<endl; 
    int money; 
    cin>>money; 

    cout << "您帅不帅？1.帅到掉渣 2.我头脑很好" << endl;
    int handsome; 
    cin >> handsome;

    cout <<"您是否是高富帅："<<(bodyCm >= 180 && money >= 100 && handsome == 1) << endl;

    return 0;
}
