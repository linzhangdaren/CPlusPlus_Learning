#include <iostream>
#include <string>

using namespace std;

// 创建子弹类
class Bullet
{
public:
    // 成员变量
    string name;
    // 构造函数
    Bullet(string name)
    {
        this->name = name;
    }
    // 成员函数
};

// 创建枪类
class Gun
{
public:
    // 成员变量
    string name;
    class Bullet *bullet;
    // 构造函数
    Gun(string name)
    {
        this->name = name;
        this->bullet = NULL;
    }
    // 成员函数
    void gunGetBullet(class Bullet *bullet)
    {
        this->bullet = bullet;
        cout << this->name << "装上了" << bullet->name << "子弹" << endl;
    }
};

// 创建人类
class Person
{
public:
    // 成员变量
    string name;
    class Gun *gun;
    class Bullet *bullet;
    // 构造函数
    Person(string name)
    {
        this->name = name;
        this->gun = NULL;
        this->bullet = NULL;
    }
    // 成员函数
    // 获取枪
    void getGun(Gun *gun)
    {
        this->gun = gun;
        cout << this->name << "拿起了" << gun->name << endl;
    }
    // 获取子弹
    void getBullet(class Bullet *bullet)
    {
        this->bullet = bullet;
        cout << this->name << "拿起了" << bullet->name << "子弹" << endl;
    }
    // 把子弹装上枪
    void putBulletInGun()
    {
        if (this->gun == NULL || this->bullet == NULL)
        {
            cout << "没有枪或子弹" << endl;
        }
        else
        {
            this->gun->gunGetBullet(this->bullet);
            this->bullet = NULL; // 装上子弹后，把子弹置为空
        };
    }
};
// 主函数
int main()
{
    // 创建人类对象
    class Person hero("老王");
    // 创建枪类对象
    class Gun gun("AK47");
    // 创建子弹类对象
    class Bullet bullet("7.62mm");
    // 老王拿枪
    hero.getGun(&gun);
    // 老王拿子弹
    hero.getBullet(&bullet);
    // 老王把子弹装上枪
    hero.putBulletInGun();

    return 0;
}