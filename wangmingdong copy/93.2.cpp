#include <iostream>
using namespace std;

void change(int *a, int *b)
{
    int temp = 0;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int a;
    int b;
    cout<<"请输入a的值："<<endl;
    cin>>a;
    cout<<"请输入b的值："<<endl;
    cin>>b;
    
    cout<<"交换前的值："<<endl;
    cout << "a=" << a << endl;
    cout << "b=" << b << endl;

    change(&a, &b);
    cout<<"交换后的值："<<endl;
    cout << "a=" << a << endl;
    cout << "b=" << b << endl;

    return 0;
}