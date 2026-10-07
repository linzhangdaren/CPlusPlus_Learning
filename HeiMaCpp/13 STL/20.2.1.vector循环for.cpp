// vector第二种遍历 for
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

    for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
    // 赋予it起始值地址 当it起始值不等于结束值 it++
    {
        cout << *it << endl;
    }
    return 0;
}