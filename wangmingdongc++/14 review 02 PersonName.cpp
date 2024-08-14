#include <iostream>
#include <string>
using namespace std;
// 生成一个人对象hero名字叫老王
// 传递给Person类用Person构造函数初始化名字

// 定义一个子弹类
class Bullet
{
};

// 定义一个枪类
class Gun
{
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
};

// 主函数
int main()
{
    // 创建一个人类对象并起个名字
    class Person hero("老王");
    cout << hero.Name << endl;

    return 0;
}