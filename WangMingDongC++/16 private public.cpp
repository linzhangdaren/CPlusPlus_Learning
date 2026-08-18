#include <iostream>
using namespace std;
// 访问权限:public、protected(继承时候用)、private
// 没有顺序可以插入写 无数量限制

class Person
{
public: // public 公共访问权限C/C++C/C++
    int age;

private: // private 私有访问权限
    float money;

public: // 可以插写
    int num;
};

int main()
{
    class Person p1;
    cout << "p1的年龄为：" << p1.age << endl;
    // cout << "p1的财富为：" << p1.money << endl;

    return 0;
}