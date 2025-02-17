#include <iostream>
using namespace std;
// 哪个对象调用，this指针就指向谁,被掉的成员函数 (Person(xxx)) 所属的对象(P1或P2等)
// this指针隐含在每个非静态成员函数内

// 用处1：区分成员变量和形参 同名的情况
class Person
{
public:
    int age;

    Person(int age)
    {
        this->age = age; // this->age指的是类中成员变量的age,另一个age是形参传过来的临时命名
    }
    // 链式编程思想，返回对象本身
    Person &PersonAddAge(Person &p) // Person&引用本身不加&就不是p2本身了，而是p2的拷贝
    {
        this->age += p.age;
        return *this; // 返回对象本身
    }
};

void test01()
{
    Person p1(10);
}

// 用处2：返回对象本身(非静态成员函数) return *this;
void test02()
{
    Person p1(10);
    Person p2(10); // 把p1的值加到p2上

    p2.PersonAddAge(p1).PersonAddAge(p1).PersonAddAge(p1);
    cout << "p2.age = " << p2.age << endl;
}
// 主函数
int main()
{
    test02();

    return 0;
}