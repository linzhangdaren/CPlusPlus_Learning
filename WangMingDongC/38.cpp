#include<iostream>
using namespace std;

int main(){
    int a;
    int b;
    cout<<"欢迎使用计算器"<<endl;
    cout << "请输入第一个数值后按回车" << endl;
    cin >> a; // 输入第一个数值，并将其存储在变量a中。
    cout << "请输入第二个数值后按回车" << endl; // 提示用户输入第二个数值。
    cin >> b; // 输入第二个数值，并将其存储在变量b中。

    cout << "请输入计算方式(+ - * /)" << endl;
    char option;
    cin >> option;

    switch(option){
        case '+': cout << a<<option<<b<<"="<<a+b<<endl; break; // 执行加法操作。
        case '-': cout << a<<option<<b<<"="<<a-b<<endl; break; // 执行减法操作。
        case '*': cout << a<<option<<b<<"="<<a*b<<endl; break; // 执行乘法操作。
        case '/': cout << a<<option<<b<<"="<<a/b<<endl; break; // 执行除法操作。
        default: cout << "输入错误" << endl; // 如果用户输入了无效的计算方式，则输出错误提示。
    }
    return 0;
}