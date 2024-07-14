#include <iostream>
using namespace std;

int main()
{
    int num=0;
    int sum=0;
    cout<<"请输入一个整数,我会自动计算累加和"<<endl;
    int input;
    cin>>input;
    cout<<"您输入的整数是："<<input<<endl;
    while(num<=input)
    {
        sum+=num;
        num++;
    }
    cout <<input<<"的累加和是："<<sum<<endl;
}