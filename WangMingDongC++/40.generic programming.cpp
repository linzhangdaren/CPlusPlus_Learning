#include <iostream>
#include <string>
using namespace std;
// 泛型编程 generic programming 自动判断数据类型
// 弱化数据类型

// 泛型编程有两种:1.函数模板 2.类模板

template <typename T>
T add(T a, T b)
{
    return a + b;
}

int main()
{
    cout << add(1, 2) << endl;
    cout << add(3.14, 5.18) << endl;
    cout << add('a','b') << endl;
    cout<<"你好啊"<<endl;

    return 0;
}