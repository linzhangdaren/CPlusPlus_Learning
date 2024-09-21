#include <iostream>
using namespace std;

int main()
{   
    //从键盘获取语数英分数

    int scores[3];
    cout << "提示:请输入相应的分数后按回车键" << endl;

    cout<<"请输入语文分数:";
    cin>>scores[0];
    cout<<"请输入数学分数:";
    cin>>scores[1];
    cout<<"请输入英语分数:";
    cin>>scores[2];
    cout<<"-----------------"<<endl;

    cout << endl;
    cout << "您的各科成绩如下：" << endl;

    cout<<"语文:"<<scores[0]<<"分"<<endl;
    cout<<"数学:"<<scores[1]<<"分"<<endl;
    cout<<"英语:"<<scores[2]<<"分"<<endl;
    

    return 0;
}