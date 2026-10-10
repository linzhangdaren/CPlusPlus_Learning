#include <iostream>
#include <string>
#include <windows.h>
#include <vector>
using namespace std;

/*
at(int index)//返回索引为index的元素，如果越界，抛出out_of_range异常
operator[]//返回索引为n的元素，如果越界，不抛出异常，直接访问非法内存
front()//返回第一个元素
back()//返回最后一个元素
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

void test01()
{

    vector<int> v1;
    for (int i = 0; i < 10; i++)
    {
        v1.push_back(i);
    }

    // 方式一数组方式访问
    for (int i = 0; i < v1.size(); i++)
    {
        cout << v1[i] << " ";
    }
    cout << endl;

    // 方式二at方式访问
    for (int i = 0; i < v1.size(); i++)
    {
        cout << v1.at(i) << " ";
    }
    cout << endl;

    // 方式三 上面写的printVector函数里的常规方式
    printVector(v1);
    cout << endl;

    // 访问获取第一个元素
    cout << "第一个元素：" << v1.front() << endl;
    // 访问最后一个元素
    cout << "最后一个元素：" << v1.back() << endl;
}

int main()
{
    // 采用utf8 防止乱码
    SetConsoleOutputCP(CP_UTF8);

    test01();

    return 0;
}