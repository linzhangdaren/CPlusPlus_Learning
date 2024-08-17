#include <iostream>
#include <string>
using namespace std;

// 老王开枪案例 2024年8月17日22:31:01

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
    class Bullet *bullet;
    class Person *person;
    // 构造函数
    Gun(string name)
    {
        this->name = name;
    }
    // 成员函数
    void GunGetBullet(class Bullet *bullet)
    {
        this->bullet = bullet;
    }
};

// 人类
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
    // 老王拿枪函数
    void GetGun(class Gun *gun)
    {
        this->gun = gun;
        cout << this->name << "拿起了" << this->gun->name << endl;
    }
    // 老王拿子弹函数
    void GetBullet(class Bullet *bullet)
    {
        this->bullet = bullet;
        cout << this->name << "拿起了" << this->bullet->name << endl;
    }
    // 老王把子弹装到枪里函数
    void PutBulletInGun()
    {
        if (this->gun == NULL || this->bullet == NULL)
        {
            cout << "缺少枪或子弹，无法装弹！" << endl;
        }
        else
        {
            this->gun->GunGetBullet(this->bullet);
            cout << "装弹成功！" << endl;
            this->bullet = NULL; // 装弹后，子弹消失
        }
    }
};

int main()
{
    // 创建 人.枪.子弹对象
    class Person hero("老王");
    class Gun gun("AK47");
    class Bullet bullet("7.62mm", 10);

    // 老王拿枪
    hero.GetGun(&gun);
    // 老王拿起子弹
    hero.GetBullet(&bullet);
    // 老王把子弹装到枪里
    hero.PutBulletInGun();

    return 0;
}