#include <iostream>
using namespace std;
// 默认值先用main中给的值如果没有那在用默认值 如果b有默认值了那么c也得有要不报错

void func(int a, int b = 10, int c = 20) // b之前可以没有默认参数b之后必须有默认参数,因为从b开始有了默认值,所以之后的参数都必须有默认值
{
    cout << "a = " << a << " b = " << b << " c = " << c << endl;
}

// 函数声明有默认值,函数实现就不能有默认值
// int func2(int a = 10, int b = 10); // 声明已经有默认值,实现不能再有//不能同时拥有默认值,要不声明有,要不实现有
// int func2(int a = 10, int b = 10)  // 应该int func2(int a, int b)
// {
//     return a + b;
// }

int main()
{
    cout << "Hello World!" << endl;

    func(1, 2); // 1 2 20  本来是不能少写一个参数的但是函数中c有默认值了所以可以省略但是值就会是默认值了

    system("pause");
    return 0;
}