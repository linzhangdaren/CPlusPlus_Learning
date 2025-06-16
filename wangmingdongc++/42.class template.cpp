#include <iostream>
#include <string>
using namespace std;
// 泛型编程 generic programming 自动判断数据类型
// 泛型编程有两种:1.函数模板 2.类模板
// 1.类模板

template <class T>
class Test
{
    T num;

    T test(T a)
    {
        cout << 哈哈 << endl;
    }
};

int main()
{
    class Test<int> t1;//主动写入int类型
    return 0;
}