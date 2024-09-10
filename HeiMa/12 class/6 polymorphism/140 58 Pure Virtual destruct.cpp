#include <iostream>
#include <string>
using namespace std;
// 纯/虚析构  Pure/ Virtual destruct
// 父类指针无法释放调用到子类析构代码,所以有了纯/虚析构函数

// 虚析构 和 纯虚析构的共性
//  1.可以解决通过父类指针释放子类对象
//  2.都需要有具体的函数实现

// 虚析构 和 纯虚析构的区别
//  1.如果纯虚析构,该类属于抽象类,无法实例化对象

// 语法:
// 1.虚析构函数
//  virtual ~类名(){}

// 2.纯虚析构函数
//  virtual ~类名() = 0;
//  类名::~类名(){}

class Animal
{
public:
    // 构造函数
    Animal()
    {
        cout << "Animal 构造函数" << endl;
    }

    // 纯虚函数
    virtual void speak() = 0;

    // // 虚构函数 无法释放子类堆区内存
    // ~Animal()
    // {
    //     cout << "Animal 析构函数" << endl;
    // }

    // 虚析构函数
    // 虚构前加上 virtual
    // virtual ~Animal()
    // {
    //     cout << "Animal 虚析构函数" << endl;
    // }

    // 纯虚析构函数 为抽象类无法实例化
    // 需要声明和实现和纯虚构函数不一样多了一步
    virtual ~Animal() = 0; // 需要实现次函数才能用
};
// 实现纯虚析构函数
Animal::~Animal()
{
    cout << "Animal 纯虚析构函数" << endl;
}

// 继承猫类
class Cat : public Animal
{
public:
    // 成员变量
    string *m_Name; // 把名字创建在了堆区

    // 构造函数
    Cat(string name)
    {
        cout << "Cat 构造函数" << endl;
        m_Name = new string(name);
    }

    // 成员函数
    void speak()
    {
        cout << *m_Name << "小猫在说话" << endl;
    }

    // // 析构函数

    ~Cat()
    {
        if (m_Name != NULL)
        {
            cout << "小猫名字析构函数" << endl;
            delete m_Name;
            m_Name = NULL;
        }
    }
};

// 调用猫类 父类指针指向子类猫
void test01()
{
    Animal *animal = new Cat("Tom");
    animal->speak();
    delete animal;
}

int main()
{
    test01();

    return 0;
}