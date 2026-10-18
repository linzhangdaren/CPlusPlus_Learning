// list特别的快要是数组删减的话后面的全都得动 list却很灵活

#include <iostream>
#include <list>
using namespace std;

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
    // 区间方式构造
    list<int> l2(l1.begin(), l1.end());
    printList(l2);
    // n个elem
    list<int> l3(10, 1000);
    printList(l3);
}

int main()
{
    // utf8编码支持中文
    // 设置显示的编码格式
    system("chcp 65001");
    test01();

    return 0;
}