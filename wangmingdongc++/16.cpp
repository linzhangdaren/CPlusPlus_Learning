#include <iostream>
using namespace std;

class Person
{
public: // public 公共访问权限C/C++C/C++
    int age;

private: // private 私有访问权限
    float money;
};

int main()
{
    class Person p1;
    cout << "p1的年龄为：" << p1.age << endl;
    cout << "p1的财富为：" << p1.money << endl;

    return 0;
}