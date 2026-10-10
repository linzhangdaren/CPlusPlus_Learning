#include <iostream>
#include <string>
#include <windows.h>
#include <vector>
using namespace std;

/*
empty()	判断容器是否为空
capacity()	容器容量 永远大于等于size
size()	容器大小
resize(int num)	重新指定容器大小 长度为num
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
    printVector(v1);

    // 判断是否为空
    if (v1.empty())
    {
        cout << "v1为空" << endl;
    }
    else
    {
        cout << "v1不为空" << endl;
        cout << "v1的大小为" << v1.size() << endl;
        cout << "v1的容量为" << v1.capacity() << endl;
    }

    // 重新指定大小 超出部分删除 新位置默认值为0
    v1.resize(15); // 如果想用别的数填充空值就resize(15, 100)100为填充值
    printVector(v1);
    cout << "v1的大小为" << v1.size() << endl;
}

int main()
{
    // 采用utf8 防止乱码
    SetConsoleOutputCP(CP_UTF8);

    test01();

    return 0;
}