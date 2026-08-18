#include <iostream>
using namespace std;

class People
{
public:
    int Age;
    int Height;
    People(int age)
    {
        Age = age;
    }
};

int main()
{
    People xh(18); // 这个是在栈中创建的自定义类型数据
    cout << "栈区中的xh的年龄是：" << xh.Age << endl;

    //    People *Pxh = &xh; // 这个是错误的，因为xh是在栈中创建的，栈中的数据在函数结束后会被销毁，所以不能通过指针访问
    People *Pxh = new People(19); // 这个是在堆中创建的自定义类型数据
    cout << "堆区中的 Pxh->的年龄是：" << Pxh->Age << endl;

    return 0;
}