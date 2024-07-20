#include <iostream>
using namespace std;
// 默认值先用main中给的值如果没有那在用默认值 如果b有默认值了那么c也得有要不报错
// 如果函数和声明分开写的话 函数声明已经有默认值了 那函数定义的时候就不能再给默认值了
void func(int a, int b = 10, int c = 20)
{
    cout << "a = " << a << " b = " << b << " c = " << c << endl;
}

int main()
{
    cout << "Hello World!" << endl;

    func(1, 2); // 1 2 20  本来是不能少写一个参数的但是函数中c有默认值了所以可以省略但是值就会是默认值了

    system("pause");
    return 0;
}