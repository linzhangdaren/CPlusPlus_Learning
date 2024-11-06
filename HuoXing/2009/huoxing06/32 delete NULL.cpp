#include <iostream>
using namespace std;
// 指针初始化 NULL或者nullptr
// delete自定义数据指针后,析构函数将会被调用,不用通过局部来释放析构了
class People
{
public:
    int Age;

    People(int Age)
    {
        this->Age = Age;
    }

    ~People()
    {
        cout << "析构函数被调用了" << endl;
    }
};

int main()
{
    People *p = new People(18);
    cout << p->Age << endl;
    delete p;
    p = nullptr;

    return 0;
}