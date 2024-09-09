#include <iostream>
using namespace std;
// 从父类继承过来的公有成员 哪些属于子类对象

// 父类中所有非静态成员都会被子类继承
// 子类访问不到继承下来的私有成员,被编译器隐藏了,看不到不代表没占用空间

// 用开发人员命令提示工具查看对象模型的架构结构
//  1. 打开命令提示工具
//  2. 进入到源文件所在目录
//  3. 输入 cl /d1 reportSingleClassLayout类名 文件名

class Base
{
public:
    int m_A;

protected:
    int m_B;

private: // 不是不能被继承而是隐藏了,在子类中任然占用空间
    int m_C;
};

// 公有继承
class Son : public Base
{
public:
    int m_D;
};

// 打印输出函数 查看son占用的空间大小
void test01()
{
    Son s1;
    cout << "sizeof(Son) = " << sizeof(Son) << endl;
    // 为什么是16?父类的私有成员m_C在子类中藏了但是会占用空间 ABCD*4字节 =16字节
}

// 主函数
int main()
{
    test01();
    return 0;
}