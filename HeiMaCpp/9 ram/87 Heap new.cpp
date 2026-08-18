#include <iostream>
using namespace std;
// 堆区 开辟数据需要new关键字

int *func()
{
    int *p = new int(10); // 开辟一个int类型数据，并赋值为10
    return p;
}

// 主函数
int main()
{
    int *p = func();
    cout << *p << endl;
    delete p; // 释放堆区数据
    return 0;
}