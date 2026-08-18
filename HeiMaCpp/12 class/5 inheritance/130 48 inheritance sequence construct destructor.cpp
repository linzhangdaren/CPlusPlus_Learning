#include <iostream>
using namespace std;
// 继承中 构造和析构函数的执行顺序 sequence

class father
{
public:
    father()
    {
        cout << "父类构造函数" << endl;
    }
    ~father()
    {
        cout << "父类析构函数" << endl;
    }
};

class son : public father
{
public:
    son()
    {
        cout << "子类构造函数" << endl;
    }
    ~son()
    {
        cout << "子类析构函数" << endl;
    }
};

int main()
{
    son s;
    // 顺序为:
    // 父类构造函数
    // 子类构造函数
    // 子类析构函数
    // 父类析构函数

    // 如果调用子类对象，先调用父类构造函数，再调用子类构造函数
    // 析构函数的调用顺序与构造函数相反

    return 0;
}