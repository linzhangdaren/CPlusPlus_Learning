#include <iostream>
using namespace std;
// const reference 常量引用
// 修饰引用或者指针 引用最多

// 常函数 当前函数不能修改成员变量 只能调用常函数 void Name() const;

// 返回值为const int*类型的函数 返回值不可被修改 接收者只能为const int*类型的指针

const int *a(int *const b)
{
    return new int(100);
}
// 常函数
class A
{
public:
    int GetAge() const;  // 常函数 只能调用常函数如GetAge2
    int GetAge2() const; // 常函数2

    void GetAge3(); // 非常函数
};

int main()
{
    int a = 10;
    const int &b = a; // 正确
    int const &c = a; // 正确
    // int &const d = a;// 错误

    // 接收者必须为const int*类型的指针
    const int *d = a(&a);

    return 0;
}

int A::GetAge() const
{
    GetAge2(); // 常函数可以调用常函数
    // GetAge3();// 常函数不能调用非常函数
    return 0;
}
