#include <iostream>
#include <string>
#include <windows.h>
#include <vector>
using namespace std;

/*
reserve(int len)  // 重新分配内存空间，将容量扩充为至少len
目的为了 提高vector的效率 减少重新分配开辟空间的次数
但是预留位置不初始化,元素的值是未定义的不可访问
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
    // 使用reserve预留空间极大减少了重新开辟空间的次数
    v1.reserve(1000); // 预留空间
    int num = 0;      // 记录开辟空间的次数
    int *p = NULL;    // 记录开辟空间的起始地址

    for (int i = 0; i < 1000; i++)
    {
        v1.push_back(i);
        if (p != &v1[0]) // 如果p不等于v1的首地址
        {
            p = &v1[0]; // 强制让p指向v1的首地址
            num++;      // 记录开辟空间的次数
        }
    }
    cout << "开辟空间的次数为：" << num << endl;
}

int main()
{
    // 采用utf8 防止乱码
    SetConsoleOutputCP(CP_UTF8);

    test01();

    return 0;
}