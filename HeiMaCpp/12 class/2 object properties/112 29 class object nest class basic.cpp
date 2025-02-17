#include <iostream>
using namespace std;
// 对象作为类的成员 创建B对象会自动创建A对象
//是先有A对象呢?还是先有B对象?
//先有A对象,再创建B对象!!!

class A
{
public:
};

class B
{
public:
    A a; // 对象作为类的成员叫: 对象成员
};
// 主函数
int main()
{

    return 0;
}