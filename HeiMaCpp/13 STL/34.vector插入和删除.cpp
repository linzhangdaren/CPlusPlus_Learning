#include <iostream>
#include <string>
#include <windows.h>
#include <vector>
using namespace std;

/*
push_back(elem) 在vector尾部插入一个元素
pop_back() 删除vector尾部元素
insert(const_iterator pos, elem) 在迭代器指向位置前插入元素
insert(const_iterator pos, int count, elem) 在迭代器指向位置前插入count个元素
erase(const_iterator pos) 删除迭代器指向位置的元素
erase(const_iterator start, const_iterator end) 删除迭代器从start到end之间的元素
clear() 清空vector中的元素
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

// 测试vector插入和删除
void test01()
{
    vector<int> v1;

    // 尾差
    v1.push_back(10);
    v1.push_back(20);
    v1.push_back(30);
    v1.push_back(40);
    printVector(v1);

    // 尾删
    v1.pop_back(); // 删除了最后一个元素
    printVector(v1);

    // 迭代器 插入
    v1.insert(v1.begin(), 100); // 在第一个位置插入100
    printVector(v1);            // 100 10 20 30 40

    v1.insert(v1.begin(), 2, 200); // 在第一个位置插入2个200
    printVector(v1);               // 200 200 100 10 20 30 40

    // 迭代器 删除
    v1.erase(v1.begin()); // 删除第一个元素
    printVector(v1);      // 200 100 10 20 30 40

    v1.erase(v1.begin(), v1.end()); // 删除所有元素 相当于清空
    printVector(v1);

    v1.clear(); // 清空
    printVector(v1);
}

int main()
{
    // 采用utf8 防止乱码
    SetConsoleOutputCP(CP_UTF8);

    test01();

    return 0;
}