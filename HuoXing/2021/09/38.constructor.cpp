// 构造函数 constructor
#include <iostream>
using namespace std;

// 因为创建对象,默认调用构造函数
// 构造函数如果被私有化将不能被初始化
// 故意私有化构造函数 那就是单例模式

class Person
{
public:
    Person();        // 建议重写构造函数时候 把默认构造函数补上
    Person(int age); // 建议重写构造函数时候 把默认构造函数补上
};

int main()
{

    return 0;
}