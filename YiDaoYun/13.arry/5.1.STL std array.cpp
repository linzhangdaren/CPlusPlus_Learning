// 新式数组的使用

#include <iostream>
#include <array> // 需要包含 array 的头文件
using namespace std;

int main()
{
    // 定义新式容器数组的基本使用方式
    // std::array<变量类型, 元素数量> 变量名;
    array<int, 10> students = {0}; // 定义一个整数数组，元素数量为10，所有元素初始化为0

    // 一.基本使用:
    //  赋值
    students[0] = 100;
    students[1] = 200;
    students[2] = 300;
    // 输出
    for (int i : students)
    {
        cout << i << " ";
    }
    cout << endl;

    // 二.特点:
    //  1.快速查询数组元素个数 size()
    cout << ".size()查询元素个数: " << students.size() << endl; // 结构体对象students里的一个成员函数size()

    // 2.批量填充元素: fill()
    students.fill(100); // 每个元素都被赋值为100
    cout << ".fill(100)批量填充数组为100" << endl;
    for (int i : students)
    {
        cout << i << " ";
    }
    // 3.超出范围报错更安全 at()
    //  数组越界访问会导致程序崩溃，使用at()函数可以避免这种情况
    //   at()函数的使用方式:
    cout << ".at(1000)访问数组越界: " << students.at(1000);

    return 0;
}
