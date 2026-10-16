#include <iostream>
#include <string>
#include <windows.h>
#include <deque>
using namespace std;

/*
双端数组 提高修改首尾参数时的效率 优化提升性能
快速对首尾双端进行操作 vector是遍历机制效率低
vector越大越慢 每个都得重新排队因为是连续性的 但是访问元素很快
所以对于模块化deque(没有容量的概念)的来讲首尾操作的效率高不用挨个遍历 有中控器维护缓存中的内容

操作函数
push_front(elem) 在容器头部添加一个元素
pop_front() 删除容器第一个元素

push_back(elem) 在容器尾部添加一个元素
pop_back() 删除容器最后一个元素

insert(pos, elem) 在指定位置插入元素
insert(pos, n, elem) 在指定位置插入n个元素，其值为elem
insert(pos, beg, end) 在指定位置插入[beg, end)区间中的元素
erase(beg, end) 删除[beg, end)区间中的元素指定位置元素
erase(pos) 删除pos位置的元素
clear() 清空容器

front() 返回容器第一个元素
back() 返回容器最后一个元素

begin() end() rbegin() rend() 返回容器迭代器

函数原形
deque<T> d; // 默认构造函数
deque(const deque &deq); // 拷贝构造函数
deque(beg, end); // 将[beg, end)区间中的元素拷贝给本身
deque(n, elem); // 构造函数将n个elem拷贝给本身
deque(const deque &deq, int pos, int n); // 将deq容器从pos开始的n个元素拷贝给本身

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

    // 区间赋值
    deque<int> d2(d1.begin(), d1.end());
    printDeque(d2);

    // 拷贝构造赋值
    deque<int> d3(d2);
    printDeque(d3);

    // 指定个数赋值
    deque<int> d4(10, 100); // 10个100
    printDeque(d4);
}

int main()
{
    // 采用utf8 防止乱码
    SetConsoleOutputCP(CP_UTF8);

    test01();

    return 0;
}