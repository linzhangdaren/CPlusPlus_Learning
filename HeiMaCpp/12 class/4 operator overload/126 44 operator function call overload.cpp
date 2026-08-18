#include <iostream>
#include <string>
using namespace std;
// 函数调用运算符()也可以重载
// 由于重载后使用的方式非常像函数的调用故称为仿函数
// 非常灵活没有固定的写法

// 函数调用运算符重载
// 打印输出类
class MyPrint
{
public:
    // 重载函数调用运算符
    void operator()(string test)
    {
        cout << test << endl;
    }
};

// 加法类
class MyAdd
{
public:
    int operator()(int num1, int num2)
    {
        return num1 + num2;
    }
};
// 常规的打印函数
void myPrint01(string test)
{
    cout << test << endl;
}
// 重载以后的打印输出函数的调用
void test01()
{
    MyPrint myPrint;
    myPrint("hello world");   // 传给了myPrint对象里 和调用函数非常像,故称为仿函数
    myPrint01("hello world"); // 传给了myPrint01函数
}

// 重载以后的加法函数的调用
void test02()
{
    MyAdd myAdd;
    int ret = myAdd(1, 2);
    cout << ret << endl;
}

int main()
{
    test02();
    // 匿名 仿函数对象 类型+小括号+参数
    cout << MyAdd()(10, 20) << endl; // 当前行执行完立即被释放!!!

    return 0;
}