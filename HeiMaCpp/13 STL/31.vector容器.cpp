#include <iostream>
#include <string>
#include <windows.h>
#include <vector>
using namespace std;

/*
vector 扩充是从新开辟空间，将原空间数据拷贝到新空间，释放原空间，再指向新空间
front() 返回容器首元素
push_back() 在尾部插入元素
pop_back() 删除尾部元素
insert() 在指定位置插入元素
erase() 删除指定位置元素
clear() 清空容器

v.size() 容器大小
v.rbegin() 返回容器首迭代器
v.end() 返回容器尾迭代器
v.front() 返回容器首元素
v.back() 返回容器尾元素
v.empty() 判断容器是否为空
v.capacity() 容器容量
v.reserve() 容器预留空间
v.shrink_to_fit() 将容器容量缩小为元素个数大小

vector<T> v;// 默认构造函数
vector(v.begin(), v.end()); // 填充构造函数
vector(n, elem); // n个elem
vector(const vector &vec); // 拷贝构造函数
*/

// 打印函数
void printVector(vector<int> &v)
{
    for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}

// vector 容器构造
void test01()
{
    vector<int> v1; // 默认构造函数
    for (int i = 0; i < 10; i++)
    {
        v1.push_back(i); // 在尾部插入元素
    }
    printVector(v1); // 调用打印输出函数

    // 通过区间构造函数，将v2中数据拷贝给v3
    vector<int> v2(v1.begin(), v1.end());
    printVector(v2);

    // n个elem
    vector<int> v3(10, 100); // 10个100
    printVector(v3);

    // 拷贝构造函数
    vector<int> v4(v3);
    printVector(v4);
}

int main()
{
    // 采用utf8 防止乱码
    SetConsoleOutputCP(CP_UTF8);

    test01();

    return 0;
}