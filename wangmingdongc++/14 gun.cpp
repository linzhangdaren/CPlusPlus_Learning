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

    // 成员函数
    Person(string name)
    {
        this->name = name;
    }

    void displayName()
    {
        cout << "姓名：" << this->name << endl;
    }
};

int main()
{
    class Person hero("zph");
    hero.displayName();

    class Gun Gun("AK47");
    Gun.displayName();

    class Bullet bullet(100);
    bullet.displayKillPower();

    return 0;
}