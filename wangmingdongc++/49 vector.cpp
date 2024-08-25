#include <iostream>
#include <vector>
// vector 容器

// 初始化方式
//  vector<int> v1; // 默认构造，v1为空，没有元素
//  vector<int> v2(v1); // 使用v1初始化v2
//  vector<int> v3(10, 1); // 10个1
//  vector<int> v4(10); // 10个0

using namespace std;

int main()
{
    vector<int> v1;  // 定义一个名字为v1的vector容器 然后录入数据
    v1.push_back(1); // back()函数在容器末尾添加元素
    v1.push_back(2);
    v1.push_back(3);
    // 插入
    v1.insert(v1.begin() + 1, 10); // 在v1的第二个位置插入10 begin()函数表示v1的起始位置
    // 删除
    v1.erase(v1.begin() + 2); // 删除v1的第三个元素
    // 遍历输出
    for (int i = 0; i < v1.size(); i++)
    {
        cout << v1[i] << endl;
    }
    cout << "------------------" << endl;
    // 另外一种遍历方式
    for (int temp_v1 : v1) // 可以把int写成auto!!!自动判断v1的类型
    {
        cout << temp_v1 << endl; // 可以直接输出
    }
    cout << "------------------" << endl;
    // 迭代器遍历 指针遍历
    for (auto temp_v1 = v1.begin(); temp_v1 != v1.end(); temp_v1++) // 见名知意,只要temp_v1不等于v1的末尾,就继续循环
    {
        cout << *temp_v1 << endl; // *temp_v1表示的是迭代器指向的元素
    }
    return 0;
}