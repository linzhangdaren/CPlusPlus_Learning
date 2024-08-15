#include <iostream>
#include <string>
using namespace std;
// 老王开枪练习复习

// 子弹类
class Bullet
{
public:
    // 成员变量
    string name;
    int damage;
    // 构造函数
    Bullet(string name, int damage)
    {
        this->name = name;
        this->damage = damage;
    }
    // 成员函数
};

// 枪类
class Gun
{
public:
    // 成员变量
    string name;
    // 构造函数
    Gun(string name)
    {
        this->name = name;
    }
    // 成员函数
};

// 人类
class Person
{
public:
    // 成员变量
    string name;
    class Gun *gun;       // 枪指针变量
    class Bullet *bullet; // 子弹指针变量
    // 构造函数
    Person(string name)
    {
        this->name = name;
        this->gun = nullptr; // 初始化为空指针
    }
    // 成员函数
    // 获取枪
    void GetGun(class Gun *gun)
    {
        this->gun = gun;
        cout << this->name << "拿起了" << this->gun->name << endl;
    }
    // 获取子弹
    void GetBullet(class Bullet *bullet)
    {
        this->bullet = bullet;
        cout << this->name << "拿起了" << this->bullet->name << endl;
    }
};

// 主函数
int main()
{
    // 创建对象:人,枪,子弹
    class Person hero("老王");
    class Gun gun("AK47");
    class Bullet bullet("7.62", 10);
    // 老王拿枪
    hero.GetGun(&gun);
    // 老王拿子弹
    hero.GetBullet(&bullet);

    return 0;
}