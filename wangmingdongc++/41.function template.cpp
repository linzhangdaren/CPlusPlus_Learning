#include <iostream>
#include <string>
using namespace std;
// 泛型编程 generic programming 自动判断数据类型
// 泛型编程有两种:1.函数模板 2.类模板
// 1.函数模板 也是可以支持重载 (参数不同)

template <typename T>
void test()
{
    T num;
    cout << "哈喽" << endl;
}

// 如果模板中有两种数据类型在后面加上即可
template <typename T, typename T2>
void test2()
{
    T num;
    T2 num2;
    cout << "哈喽2" << endl;
}

int main()
{
    test<int>(); // 需要主动写上类型 别让电脑猜不然这个识别不了
    // 如果有实参可以不写尖括号以为电脑可以推算,如果没实参必须写尖括号

    test2<int, double>();
    return 0;
}