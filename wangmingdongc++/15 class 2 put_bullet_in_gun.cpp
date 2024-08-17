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
    class Bullet *bullet; // 子弹类型的指针变量
    // 构造函数
    Gun(string name)
    {
        this->name = name;
    }
    // 成员函数
    void GetPersonBullet(class Bullet *bullet) // 注意这里是接收Person类中的子弹地址
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
    // 装弹
    void PutBulletInGun()
    {
        if (this->gun == nullptr || this->bullet == nullptr)
        {
            cout << "没有枪或没有子弹" << endl;
        }
        else
        {
            this->gun->GetPersonBullet(this->bullet); // 老王本身获取到子弹的地址传给枪类
        }
        cout << this->name << "装弹完毕" << endl;
        this->bullet = nullptr; // 装弹完毕后，老王手中的子弹指针置空
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
    // 老王装弹
    hero.PutBulletInGun();

    return 0;
}