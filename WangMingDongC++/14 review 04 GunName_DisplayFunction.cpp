#include <iostream>
#include <string>
using namespace std;
// 编写枪类 先在main函数中编写需要什么就给class里添加什么
// 一个是起名&一个是显示信息 string Nmae;dsplay_info()

// 定义一个子弹类
class Bullet
{
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

    return 0;
}