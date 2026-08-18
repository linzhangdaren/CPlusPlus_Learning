#include <iostream>
using namespace std;
// this指针 在对象内部获得自身的引用 类似self 作用域在类内部外部不能使用

class People
{

public:
    int Age;        // 成员变量
    People(int Age) // Age是外部给的参数不是成员变量
    {
        // Age=Age; //成员变量Age=外部参数Age 机器器不知道哪个是哪个
        this->Age = Age; // this指针指向对象本身 this->Age指向成员变量Age
    }
};

int main()
{
    People p1(10);
    cout << p1.Age << endl;
    return 0;
}