#include <iostream>
#include <string>
using namespace std;
// 老王开枪v2版 多态版本
class AK47
{
public:
    // 成员函数
    void fire()
    {
        cout << "AK47开火" << endl;
        this->popBullet(); // 调用popBullet函数射出子弹
    }
    void popBullet()
    {
        cout << "射出一颗子弹" << endl;
    }
};

class MP5
{
public:
};

class Person
{
private:
    // 成员变量
    string name;
    class AK47 *ak47;
    // 构造函数
public:
    Person(string name)
    {
        this->name = name;
    }
    // 成员函数
    void pressTrigger(class AK47 *ak47)
    {
        cout << "老王扣动扳机" << endl;
        ak47->fire(); // 调用AK47对象的fire函数
    }
};

int main()
{
    // 创建老王对象
    class Person laowang("老王");
    // 创建AK47对象
    class AK47 ak47;
    // 创建一个MP5对象
    class MP5 mp5;

    // 老王扣动ak47的扳机
    laowang.pressTrigger(&ak47);

    return 0;
}