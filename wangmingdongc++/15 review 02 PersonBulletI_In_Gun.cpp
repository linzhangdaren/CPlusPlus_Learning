#include <iostream>
#include <string>
using namespace std;
// 老王把子弹安装到枪中
// 老王Person类对象直接和子弹对象关联是没有意义的,得让枪和子弹关联才行

// 把子弹装枪里的函数,put_bullet_to_gun

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
    class Bullet *Bullet; // 用子弹类的指针来接收传来的子弹的地址10发子弹
    // 成员函数
    Gun(string name)
    {
        this->Name = name;
        this->Bullet = NULL; // 初始化的时候,枪里没有子弹,不然野指针会报错的
    }
    // 显示打印输出枪的信息
    void display_info()
    {
        cout << "枪型号:" << this->Name << endl;
    }
    //
    void save_bullet(class Bullet *bullet)
    {
        cout << this->Name << "装了" << bullet->Name << endl;
        this->Bullet = bullet;
    }
};

// 定义一个人类
class Person
{

public:
    // 成员变量
    string Name;
    class Gun *Gun;       // 用抢类的指针来接收传来的枪的地址
    class Bullet *Bullet; // 用子弹类的指针来接收传来的子弹的地址
    // 成员函数
    Person(string name) // 用构造函数直接接收"老王"名字初始化了
    {
        this->Name = name;
        this->Gun = NULL;    // 初始化的时候,老王没有枪,不然野指针会报错的
        this->Bullet = NULL; // 初始化的时候,老王没有子弹,不然野指针会报错的
    }
    // 显示打印输出人类信息
    void display_info()
    {
        cout << "姓名:" << this->Name << endl;
        // 如果有枪,就打印枪的信息
        if (this->Gun)
        {
            cout << "有枪" << endl;
        }
        else
        {
            cout << "没有枪" << endl;
        }
        // 如果有子弹,就打印子弹的信息
        if (this->Bullet)
        {
            cout << "有子弹" << endl;
        }
        else
        {
            cout << "没有子弹" << endl;
        }
    }
    // 老王拿起枪函数
    void take_gun(class Gun *gun) // 用来接收枪的地址,类型是枪类型的指针Gun*
    {
        this->Gun = gun;                                     // 把枪的地址赋值给老王
        cout << this->Name << "拿起了" << gun->Name << endl; // 打印老王拿起了什么枪
    }
    // 老王拿子弹
    void take_bullet(class Bullet *bullet)
    {
        this->Bullet = bullet;
        cout << this->Name << "拿起了" << bullet->Name << endl; // 打印老王拿起了什么子弹
    }
    // 老王把子弹安装到枪里函数
    void put_bullet_to_gun()
    {
        // 如果老王有枪,并且有子弹,那么就把子弹安装到枪里
        if (this->Gun == NULL || this->Bullet == NULL)
        {
            cout << "老王没有枪或者没有子弹" << endl;
        }
        else
        {
            this->Gun->save_bullet(this->Bullet); // 调用枪类的保存子弹函数,把子弹的地址传给枪类
            this->Bullet = NULL;                  // 老王把子弹拿走了,所以老王没有子弹了
        }
    }
};

// 主函数
int main()
{
    // 创建对象:人(老王),枪(ak47),子弹(7.62)
    class Person hero("老王");
    class Gun gun("AK47");
    class Bullet bullet("7.62", 10);

    // 老王拿枪:
    hero.take_gun(&gun);       // 老王拿起枪函数,需要把枪的地址传给老王,如果是值传递,那么老王只能拿到一个拷贝,所以用指针
    hero.take_bullet(&bullet); // 老王拿上子弹
    hero.display_info();       // 打印老王信息
    hero.put_bullet_to_gun();  // 老王把子弹安装到枪里

    return 0;
}