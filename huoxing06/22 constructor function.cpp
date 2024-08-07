#include <iostream>
using namespace std;

class Person
{
public:       // 如果改为private 则无法创建对象
    Person(); // 构造函数,名字和类名必须一致,参数可空但无返回值
};

Person::Person() // 构造函数的定义
{
    cout << "Person() 构造函数被调用" << endl;
};

int main()
{
    Person p; // 创建对象系统自动调用p.Person()函数,主动调用会报错

    return 0;
}