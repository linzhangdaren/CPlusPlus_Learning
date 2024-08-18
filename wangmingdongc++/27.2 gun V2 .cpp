#include <iostream>
#include <string>
using namespace std;
// 老王开枪v2版 多态版本

// 枪父类
class Gun

{
public:
    // 成员函数
    void fire()
    {
        cout << "开火" << endl;
        this->popBullet(); // 调用popBullet函数射出子弹
    }
    virtual void popBullet()
    {
        cout << "射出一颗子弹" << endl;
    }
};

// 枪子类:AK47
class AK47 : public Gun
{
public:
    virtual void popBullet() // 重写
    {
        cout << "ak47射出一颗子弹" << endl;
        cout << "--------------------" << endl;
    }
};
// 枪子类:MP5
class MP5 : public Gun
{
public:
    virtual void popBullet() // 重写
    {
        cout << "mp5射出一颗子弹" << endl;
        cout << "--------------------" << endl;
    }
};

// 人类:老王
class Person
{
private:
    // 成员变量
    string name;
    class Gun *gun;
    // 构造函数
public:
    Person(string name)
    {
        this->name = name;
    }
    // 成员函数
    void pressTrigger(class Gun *gun)
    {
        this->gun = gun;
        cout << "老王扣动扳机" << endl;
        gun->fire(); // 调用枪类的开火函数
    }
};

// 主函数
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
    // 老王扣动mp5的扳机
    laowang.pressTrigger(&mp5);

    return 0;
}