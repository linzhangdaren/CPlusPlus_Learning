// vector的二维数组 嵌套vector就是二维数组了
#include <iostream>
#include <windows.h>
#include <vector>
#include <string>
using namespace std;

void test01()
{
    // 创建三个vector容器
    vector<int> v1;
    vector<int> v2;
    vector<int> v3;

    // 创建一个大的vector容器，用来存放三个小的vector容器
    vector<vector<int>> v;

    // 向三个小的vector容器中添加数据
    for (int i = 0; i < 10; i++)
    {
        v1.push_back(i);
        v2.push_back(i + 1);
        v3.push_back(i + 2);
    }
    // 将三个小的vector容器添加到大vector容器中
    v.push_back(v1);
    v.push_back(v2);
    v.push_back(v3);

    // 遍历大vector容器1
    for (vector<vector<int>>::iterator it = v.begin(); it != v.end(); it++)
    {
        // 这样理解：外层大容器的it指向的是小v1,v2,v3,v4对象；vit才是遍历里面的数组，所以要解引用取值；
        for (vector<int>::iterator vit = (*it).begin(); vit != (*it).end(); vit++)
        {
            cout << *vit << " ";
        }
        cout << endl;
    }

    // // 遍历大vector容器2 简便方法
    // for (int i = 0; i < v.size(); i++)
    // {
    //     for (int j = 0; j < v[i].size(); j++)
    //     {
    //         cout << v[i][j] << " ";
    //     }
    //     cout << endl;
    // }
}

int main()
{
    // 采用utf8编码
    system("chcp 65001");

    test01();

    return 0;
}