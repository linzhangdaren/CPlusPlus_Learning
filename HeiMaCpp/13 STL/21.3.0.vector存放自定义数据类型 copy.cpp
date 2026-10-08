// vector存放自定义数据类型
#include <iostream>
#include <windows.h>
#include <vector>
#include <string>
using namespace std;

class Person
{
public:
    string name;
    int age;

public:
    Person(string name, int age)
    {
        this->name = name;
        this->age = age;
    }
};

void test01()
{
    vector<Person> v;

    Person p1("Tom", 18);
    Person p2("Jerry", 19);
    Person p3("Alice", 20);

    v.push_back(p1);
    v.push_back(p2);
    v.push_back(p3);
    // 遍历
    for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
    {
        // cout << "姓名:" << (*it).name << " 年龄:" << (*it).age << endl;//这里的it是一个指针类型 可以直接用->更方便 如下
        cout << "姓名:" << it->name << " 年龄:" << it->age << endl;
    }
}

int main()
{
    // 采用utf8编码
    system("chcp 65001");

    test01();

    return 0;
}