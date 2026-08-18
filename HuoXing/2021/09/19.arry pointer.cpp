// 数组和指针 单独取某个元素的值
#include <iostream>
using namespace std;

int main()
{
    string str[]{"123", "456", "789"};
    string *p = str;    // string *p=&str[0];
    cout << *p << endl; // 输出123

    // 新建一个指针指向数组的第二个元素
    string *p1 = &str[1]; // 需要加&了不能像第一个元素那样直接*p1=str;
    cout << *p1 << endl;  // 输出789
    // p指向数组的第一个元素

    return 0;
}