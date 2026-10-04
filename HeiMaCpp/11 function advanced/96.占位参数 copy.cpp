#include <iostream>
using namespace std;

void func(int a, int) // 占位参数也可以给默认值 int = 0 传参就不用写了 具体有啥用以后再说
{
    cout << "a = " << a << endl;
}
int main()
{
    cout << "Hello World!" << endl;

    func(1, 1); // 虽然占位参数没有给实参，但这里也得写一个整型参数

    system("pause");
    return 0;
}