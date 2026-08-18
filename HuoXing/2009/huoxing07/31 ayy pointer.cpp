#include <iostream>
#include <string>
using namespace std;

// 数组指针 也就是指向数组的指针

int main()
{
    int Data[5]{1, 2, 3, 4, 5}; // 数组有5个元素，每个元素都是int类型
    int(*ptr)[5] = &Data;       // 指向包含5个int元素的数组的指针

    cout << "Data[0] = " << (*ptr)[0] << endl;
    cout << "Data[1] = " << (*ptr)[1] << endl;

    return 0;
}