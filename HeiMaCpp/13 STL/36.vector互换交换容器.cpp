#include <iostream>
#include <string>
#include <windows.h>
#include <vector>
using namespace std;

/*
swap(vector1, vector2) 交换两个容器的数据
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
    cout << " 交换前" << endl;
    for (int i = 0; i < 10; i++)
    {
        v1.push_back(i);
    }

    vector<int> v2;
    for (int i = 10; i > 0; i--)
    {
        v2.push_back(i);
    }
    printVector(v1);
    printVector(v2);

    swap(v1, v2);
    cout << " 交换后" << endl;
    printVector(v1);
    printVector(v2);
}

// 可以收缩容量
void test02()
{
    vector<int> v;
    for (int i = 0; i < 10000; i++)
    {
        v.push_back(i);
    }
    cout << "v的容量为：" << v.capacity() << endl;
    cout << "v的大小为：" << v.size() << endl;

    v.resize(3); // 重新指定大小,但是不会删除数据浪费空间
    // 使用swap收缩空间
    vector<int>(v).swap(v); // vector<int>(v)创建一个临时对象匿名对象,然后和v交换,临时匿名对象会自动释放空间
    cout << "v的容量为：" << v.capacity() << endl;
    cout << "v的大小为：" << v.size() << endl;
}

int main()
{
    // 采用utf8 防止乱码
    SetConsoleOutputCP(CP_UTF8);

    test01();
    test02();

    return 0;
}