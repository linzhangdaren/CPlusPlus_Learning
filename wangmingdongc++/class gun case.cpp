#include <iostream>
using namespace std;
// 老王开枪 第三次练习

// 子弹类
class Bullet
{
public:
    // 成员变量
    string Name;
    int Damage;
    // 构造函数
    Bullet(string name, int damage)
    {
        this->Name = name;
        this->Damage = damage;
    }
    // 成员函数
};

// 枪类
class Gun
{
public:
    // 成员变量
    string Name;
    class Bullet *bullet; // 指向子弹对象的指针
    // 构造函数
    Gun(string name)
    {
        this->Name = name;
        class Bullet *bullet = nullptr; // 初始化子弹为空指针
    }
    // 成员函数
    void GetBullet(class Bullet *bullet)
    {
        this->bullet = bullet;
    }
};

// 人类
class Person
{
public:
    // 成员变量
    string Name;
    class Gun *gun; // 指向枪对象的指针
    class Bullet *bullet;
    // 构造函数
    Person(string name)
    {
        this->Name = name;
        class Gun *gun = nullptr;       // 初始化枪为空指针
        class Bullet *bullet = nullptr; // 初始化子弹为空指针
    }
    // 成员函数
    // 获取枪
    void GetGun(class Gun *gun)
    {
        this->gun = gun;
        cout << Name << "拿起了" << gun->Name << endl;
    }
    // 获取子弹
    void GetBullet(class Bullet *bullet)
    {
        this->bullet = bullet;
        cout << this->Name << "拿起了" << this->bullet->Name << endl;
        this->bullet = nullptr; // 把子弹拿走后清空Person的子弹指针
    }
    // 把子弹装进枪里
    void PutBulletInGun()
    {
        // 判断是否有枪和子弹
        if (this->gun == nullptr || this->bullet == nullptr)
        {
            cout << "没有枪和子弹";
        }
        else
        {
            this->gun->GetBullet(this->bullet); // 把Person拿到的子弹地址传给Gun的GetBullet函数
            cout << "已填充子弹";
        }
    }
};

// 主函数
int main()
{
    class Person hero("老王");
    class Gun gun("AK47");
    class Bullet bullet("7.62mm", 10);

    // 老王拿枪
    hero.GetGun(&gun);       // 把枪对象的地址传给老王的GetGun函数
    hero.GetBullet(&bullet); // 把子弹对象的地址传给老王的GetBullet函数
    // 把子弹装进枪里
    hero.PutBulletInGun();

    return 0;
}