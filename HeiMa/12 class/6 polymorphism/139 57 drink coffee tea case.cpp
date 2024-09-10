#include <iostream>
using namespace std;
// 做饮品 多态 案例

// 抽象基类
class AbstractDrinking
{
public:
    // 煮水
    virtual void Boil()
    {
    }
    // 冲泡
    virtual void Brew()
    {
    }
    // 倒入杯中
    virtual void PourInCup()
    {
    }
    // 加料
    virtual void AddSomething()
    {
    }

    // 成员函数
    // 制作饮品
    void MakeDrink()
    {
        Boil();
        Brew();
        PourInCup();
        AddSomething();
    }
};

// 继承类 咖啡
class Coffee : public AbstractDrinking
{
public:
    // 重写虚函数
    // 煮水
    virtual void Boil()
    {
        cout << "煮农夫山泉" << endl;
    }
    // 冲泡
    virtual void Brew()
    {
        cout << "冲泡咖啡" << endl;
    }
    // 倒入杯中
    virtual void PourInCup()
    {
        cout << "倒入咖啡杯中" << endl;
    }
    // 加料
    virtual void AddSomething()
    {
        cout << "加糖加奶" << endl;
    }
};

// 继承类 茶
class Tea : public AbstractDrinking
{
public:
    // 重写虚函数
    // 煮水
    virtual void Boil()
    {
        cout << "煮矿泉水" << endl;
    }
    // 冲泡
    virtual void Brew()
    {
        cout << "冲泡茶叶" << endl;
    }
    // 倒入杯中
    virtual void PourInCup()
    {
        cout << "倒入茶杯中" << endl;
    }
    // 加料
    virtual void AddSomething()
    {
        cout << "加柠檬" << endl;
    }
};

// 制作人 父类指针指向子对象
void DoWork(AbstractDrinking *abs)
{
    cout << "-开始冲泡-" << endl;
    abs->MakeDrink();
    delete abs; // 释放内存
    cout << "-----------" << endl;
}

// 制作咖啡
void MakeCoffee()
{
    Coffee *coffee = new Coffee;
    DoWork(coffee); // 调用多态
}

// 制作茶
void MakeTea()
{
    Tea *tea = new Tea;
    DoWork(tea); // 调用多态
}

// 主函数
int main()
{
    MakeCoffee();
    MakeTea();

    return 0;
}