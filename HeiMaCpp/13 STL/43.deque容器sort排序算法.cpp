#include <iostream>
#include <string>
#include <windows.h>
#include <deque>
#include <algorithm> //算法头文件
using namespace std;

/*
排序算法
sort(deque.begin(), deque.end());
*/

// 打印函数
void printDeque(deque<int> &d) // 如果使用const deque<int> &d迭代器就得换为const_iterator
{
    for (deque<int>::iterator it = d.begin(); it != d.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}

void test01()
{
    deque<int> d1;
    // 插入元素
    for (int i = 0; i < 10; i++)
    {
        d1.push_back(i);
    }
    printDeque(d1);
    // 算法排序
    sort(d1.begin(), d1.end()); // 默认升序 降序以后再讲
    printDeque(d1);
}

int main()
{
    // 采用utf8 防止乱码
    SetConsoleOutputCP(CP_UTF8);

    test01();

    return 0;
}