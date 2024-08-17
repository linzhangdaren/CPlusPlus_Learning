#include <iostream>
using namespace std;

// 定义一个子弹类
class Bullet
{
public:
    // 成员变量
    int killPower;
    // 成员函数
    Bullet(int killPower)
    {
        this->killPower = killPower;
    };
    void displayKillPower()
    {
        cout << "子弹威力：" << this->killPower << endl;
    }
};
// 定义一个枪类
class Gun
{
public:
    // 成员变量
    string name;

    // 成员函数
    Gun(string name)
    {
        this->name = name;
    }

    void displayName()
    {
        cout << "枪名：" << this->name << endl;
    }
};
// 定义一个人类
class Person
{
public:
    // 成员变量
    string name;
    class Gun *gun;
    class Bullet *bullet;

    // 成员函数
    Person(string name)
    {
        this->name = name;
        this->gun = NULL;
        this->bullet = NULL;
    }

    void displayName()
    {
        cout << "姓名：" << this->name << endl;
        if (this->gun != NULL)
        {
            cout << "有枪" << gun->name << endl;
        }
        else
        {
            cout << "没有枪" << endl;
        }

        if (this->bullet != NULL)
        {
            cout << "有子弹" << endl;
        }
        else
        {
            cout << "没有子弹" << endl;
        }
    }

    void get_gun(class Gun *gun)
    {
        this->gun = gun;
    }

    void get_bullet(class Bullet *Bullet)
    {
        this->bullet = Bullet;
    }

    void put_bullet_gun()
    {
        // 让子弹的地址传到枪地址里去
        if (this->gun == NULL || this->bullet == NULL)
        {
            cout << "没有枪或者没有子弹" << endl;
        }
        else
        {
            
        }
    }
};

int main()
{
    class Person hero("zph");
    hero.displayName();

    class Gun gun("AK47");
    gun.displayName();

    class Bullet bullet(100);
    bullet.displayKillPower();
    cout << endl;
    // 给英雄对象添加枪和子弹

    hero.get_gun(&gun);
    hero.displayName();
    cout << endl;

    hero.get_bullet(&bullet);
    hero.displayName();
    cout << endl;
    // 让hero把子弹装到枪里
    hero.put_bullet_gun();

    return 0;
}