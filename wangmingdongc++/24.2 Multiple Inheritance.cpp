#include <iostream>
using namespace std;
// 解决父母都有同类函数的二义性

// Multiple Inheritance 多重继承
// 一个子类继承了多个父类
// 此案例 class C 继承了A和B

// 多继承可以实现连接多个类的功能
class Father
{
public:
    void makeMoney()
    {
        cout << "testA" << endl;
    }
};

class Mother
{
public:
    void makeMoney()
    {
        cout << "testB" << endl;
    }
};

class Son : public Father, public Mother
{
public:
    void makeMoney() // 不写这个系统会出现二义性
    {
        Father::makeMoney();
        // // Mother::makeMoney();
    }
};

int main()
{
    Son son;
    son.makeMoney(); // 父母都有makeMoney方法 子类不重写个mekeMoney会报错
    return 0;
}