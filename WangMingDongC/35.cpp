#include <iostream>
using namespace std;

int main()
{

    int num;
    cout << "周几出去玩？请输入1-7" << endl;
    cin >> num;
    // if(num==1){
    //     cout << "周一" << endl;
    // }else if(num==2){
    //     cout << "周二" << endl;
    // }else if(num==3){
    //     cout << "周三" << endl;
    // }else if(num==4){
    //     cout << "周四" << endl;
    // }else if(num==5){
    //     cout << "周五" << endl;
    // }else if(num==6){
    //     cout << "周六" << endl;
    // }else if(num==7){
    //     cout << "周日" << endl;
    // }else{
    //     cout << "输入错误" << endl;
    // }
    switch (num)
    {
    case 1:
        cout << "周一" << endl;cout<<"优惠日"<<endl;
        break;
    case 2:
        cout << "周二" << endl;
        break;
    case 3:
        cout << "周三" << endl;
        break;
    case 4:
        cout << "周四" << endl;
        break;
    case 5:
        cout << "周五" << endl;
        break;
    case 6:
        cout << "周六" << endl;
        break;
    case 7:
        cout << "周日" << endl;
        break;

    default:
        cout << "输入错误" << endl;
        break;
    }
    return 0;
}
