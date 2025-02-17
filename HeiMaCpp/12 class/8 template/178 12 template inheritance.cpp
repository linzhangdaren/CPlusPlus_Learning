#include <iostream>
using namespace std;
// 类模板与继承
// 1.父类是类模板,子类在声明时,需要指定父类模板参数
// 2.如果不指定,编译器无法推导出父类中的T是什么类型无法给子类分配内存
// 3.如果想灵活指定出父类T中类型,子类也需要变为类模板

template <class T>
class Base
{
public:
    T m;
};

// 错误示范:父类是类模板,子类在声明时,需要指定父类模板参数
//  class son : public Base{};
class Son : public Base<int>
{
};

// 3.如果想灵活指定出父类T中类型,子类也需要变为类模板
template <class T1, class T2>
class Son2 : public Base<T2>
{
public:
    T1 obj; // int T2是char
};

// 调用
void test01()
{
    Son s1;
}

void test02()
{
    Son2<int, char> S2;
}
//  主函数
int main()
{
    test01();

    return 0;
}