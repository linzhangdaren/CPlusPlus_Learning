#include <iostream>
using namespace std;
// 析构函数 垃圾清理 用局部函数来实现
class A
{
public:
    ~A(); // 析构函数声明
};

A::~A() // 析构函数定义
{
    cout << "析构函数" << endl;
}

void test() // 用局部函数来实现,如果不用局部函数，则会在main函数结束时才调用,但是已经看不见了
{
    A a;
}

int main()
{
    test();
    return 0;
}