// 再次练习指针传递

#include <iostream>
using namespace std;

void print(int* a,int* b){
    cout<<"请输入第一个数值："<<endl;
    cin >> *a;
    cout<<"请输入第二个数值："<<endl;
    cin >> *b;
}
int main()
{
    //定义两个int变量
    int a;
    int b;
    // 把两个变量的地址传给函数print;
    print(&a,&b);
    cout << "第一个数值为：" << a << endl; // 输出第一个数值a的值，即函数print中*a的值
    cout<<"第二个数值为："<<b<<endl;//输出第二个数值b的值，即函数print中*b的值。
    
    return 0;
}