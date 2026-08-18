#include <iostream>
#include <string>
using namespace std;
// 编写子弹类
// 给子弹起名字&子弹杀伤力 并添加 显示打印输出子弹名字和杀伤力的的函数

// 定义一个子弹类
class Bullet
{
public: // 成员变量
    string Name;
    int Damage; // 子弹杀伤力
    // 成员函数
    Bullet(string name, int damage)
    {
        this->Name = name;
        this->Damage = damage;
    }
    // 显示打印输出子弹名字的函数
    void display_info()
    {
        cout << "子弹型号:" << this->Name << endl;
        cout << "子弹杀伤力:" << this->Damage << endl;
    }
};

// 定义一个枪类
class Gun
{
public:
    // 成员变量
    string Name;
    // 成员函数
    Gun(string name)
    {
        this->Name = name;
    }
    // 显示打印输出枪的信息
    void display_info()
    {
        cout << "枪型号:" << this->Name << endl;
    }
};

// 定义一个人类
class Person
{

public:
    // 成员变量
    string Name;
    // 成员函数
    Person(string name) // 用构造函数直接接收"老王"名字初始化了
    {
        this->Name = name;
    }
    // 显示打印输出人类信息
    void display_info()
    {
        cout << "姓名:" << this->Name << endl;
    }
};

// 主函数
int main()
{
    // 创建一个人类对象并起个名字
    class Person hero("老王");
    // 调用显示信息函数
    hero.display_info();

    // 创建一个枪类对象 起名AK47
    class Gun gun("AK47");
    // 调用显示信息函数
    gun.display_info();

    // 创建一个子弹类对象 名字为7.62,杀伤力是10
    class Bullet bullet("7.62", 10);
    // 调用显示信息函数
    bullet.display_info();

    return 0;
}