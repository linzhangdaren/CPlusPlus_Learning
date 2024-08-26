#include <iostream>
using namespace std;

class Person
{
public:
    int AM = 0;
    static int PM; // 静态成员变量初始化需要在类外进行
};

int Person::PM = 0;

int main()
{
    Person p1;
    Person p2;

    p1.PM++; // 非静态成员变量，每个对象都共享一份
    cout << p1.PM << endl;
    cout << p2.PM << endl;
    return 0;
}