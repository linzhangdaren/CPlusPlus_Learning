// list大小操作

#include <iostream>
#include <list>
using namespace std;

// size empty resize(num) resize(num,elem)

void printList(const list<int> &l)
{
    for (list<int>::const_iterator it = l.begin(); it != l.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}
void test01()
{
    // 创建list容器
    list<int> l1;
    // 插入数据
    l1.push_back(10);
    l1.push_back(20);
    l1.push_back(30);
    l1.push_back(40);
    // 遍历容器
    printList(l1);
    // 判断是否为空
    if (!l1.empty())
    {
        cout << "l1不为空 元素个数为:" << l1.size() << endl;
    }
    // 重新制定个数大小
    l1.resize(10); // 默认填充0或者l1.resize(10,1000);
}

int main()
{
    // utf8编码支持中文
    // 设置显示的编码格式
    system("chcp 65001");
    test01();

    return 0;
}