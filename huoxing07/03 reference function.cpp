#include <iostream>
using namespace std;
// 引用真正的用处是当做函数的参数，可以修改实参的值
// 值传递拷贝,引用传递不拷贝 c++中才有的c没有

void Say(int &Num)
{
    cout << &Num << endl;
    Num = 200;
};

int main()
{

    int Num = 100;
    cout << &Num << endl;
    Say(Num);
    cout << Num << endl;

    return 0;
}
