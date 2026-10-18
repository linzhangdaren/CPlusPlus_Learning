// list赋值和交换
// assign(beg,end) 将[beg,end)区间中的元素赋值给list
// assign(n,elem) 将n个elem赋值给list
// swap(lst) 交换list中的元素
// list& operator=(const list &lst) 重载等号操作符，将lst中的元素赋值给当前的list

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
    list<int> l2;
    l2 = l1;
    printList(l2);
    list<int> l3;
    l3.assign(l1.begin(), l1.end());
    printList(l3);
    list<int> l4;
    l4.assign(10, 100);
    printList(l4);
}
// 交换
void test02()
{
    // 插入数据
    list<int> l1;
    l1.push_back(10);
    l1.push_back(20);
    l1.push_back(30);
    l1.push_back(40);
    list<int> l2;
    l2.assign(10, 100);
    // 交换前
    cout << "交换前" << endl;
    printList(l1);
    printList(l2);
    // 交换后
    l1.swap(l2);
    cout << "交换后" << endl;
    printList(l1);
    printList(l2);
}

int main()
{
    // utf8编码支持中文
    // 设置显示的编码格式
    system("chcp 65001");
    test01();
    test02();

    return 0;
}