#include <iostream>
#include <string>
using namespace std;
// 构造函数 初始化对象成员变量

class Person
{
public:                           // 如果改为private 则无法创建对象
    Person(int age, string name); // 声明和定义都需要写(int age, string name)
    int Age;                      // 构造函数,名字和类名必须一致,参数可空但无返回值
    string Name;
};

Person::Person(int age, string name) // 方便写法 Person::Person(int age, string name): Age(age),Name(name){}
{
    cout << "通过构造函数给类生成的对象成员变量赋值" << endl;
    Age = age;
    Name = name;
}

int main()
{
    Person p(10, "张三"); // 创建对象时直接(10,"张三")赋值就不用另外赋值了
                          // p.Age=10;
                          // p.Name="张三";
    cout << p.Age << endl;
    cout << p.Name << endl;
    return 0;
}