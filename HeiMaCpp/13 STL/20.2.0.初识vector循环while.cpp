// vector的简单使用 数据存放和while遍历
#include <iostream>
using namespace std;
// 头文件
#include <vector>

int main()
{
    // 存放内置数据类型
    vector<int> v;
    // 插入数据
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    // 用迭代器遍历
    vector<int>::iterator itBegin = v.begin(); // 指向数组中的第一个元素
    vector<int>::iterator itEnd = v.end();     // 指向数组中的最后一个元素的下一个位置!!!

    // 1. `vector<int>`：存一堆 int 数字的动态数组，变量名叫`v`
    // 2. `vector<int>::iterator`：定义一个迭代器变量，这个迭代器**专门适配存 int 的 vector**
    // 3. `itBegin`：迭代器的名字（你可以随便起名，比如 it、beginIt）
    // 4. `v.begin()`：vector 自带函数，**返回一个迭代器，指向容器 v 的第一个元素**

    // 输出vector中的元素
    while (itBegin != itEnd)
    {
        cout << *itBegin << endl;
        itBegin++;
    }

    return 0;
}