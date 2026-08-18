// 子类继承父类的使用方法

//子类没有默认调用父类的 子类有就用子类的
#include <iostream>
#include <string>
using namespace std;

class Animal
{
public:
    string name;
    int age;
    int leg;
};

class Dog : public Animal
{
public:
    Dog(string name, int age, int leg)
    {
        this->name = name;
        this->age = age;
        this->leg = leg;
    }
};

int main()
{

    return 0;
}