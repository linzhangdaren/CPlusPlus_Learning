#include <iostream>
using namespace std;

int main()
{   
    //语数英分数
    //定义方式
    // 第一种/int scores[3] = {60,70,80};
    
    // 第二种/int scores[3];
    //         scores[0] = 60;
    //         scores[1] = 70;
    //         scores[2] = 80;

    int scores[3];
    scores[0] = 60;
    scores[1] = 70;
    scores[2] = 80;

    cout<<"语文:"<<scores[0]<<"分"<<endl;
    cout<<"数学:"<<scores[1]<<"分"<<endl;
    cout<<"英语:"<<scores[2]<<"分"<<endl;
    

    return 0;
}