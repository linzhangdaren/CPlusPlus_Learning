#include <iostream>
using namespace std;
// 多级基层 Multilevel Inheritance
// 创建爷爷类.继承爸爸类.继承孙子类.c继承b,b继承a,a->b->c

class Grandpa
{
public:
    void show()
    {
        cout << "我是爷爷类" << endl;
    }
};

class Father : public Grandpa
{
public:
    void show()
    {
        cout << "我是爸爸类" << endl;
    }
};

class Son : public Father
{
public:
    void show() // 通过函数也可以打印
    {
        cout << "我是孙子类" << endl;
        Father::show();  // 调用爸爸类的方法
        Grandpa::show(); // 调用爷爷类的方法
        cout << "-----------------" << endl;
    }
};

int main()
{
    Son s;             // 孙子类调用爸爸和爷爷类的方法
    s.show();          // 自己
    s.Father::show();  // 爸爸
    s.Grandpa::show(); // 爷爷
    return 0;
}