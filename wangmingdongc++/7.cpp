#include <iostream>
using namespace std;

class MayClass//既有变量又有函数的类叫类
{
public: // 公共权限
    // 变量(成员变量)
    int a;
    char b;
    int *p;

    // 函数(成员函数) 一般不写在类中,只把函数声明写在类中
    void test()
    {
    }
    void test2(int a, int b)
    {
    }
};

int main()
{
class MayClass a;//用类定义出来的变量叫对象
class MayClass b;//既有数据又有函数叫对象
class MayClass c;

cout<<"a的地址"<<&a<<endl;
cout<<"b的地址"<<&b<<endl;
cout<<"c的地址"<<&c<<endl;

    return 0;
}