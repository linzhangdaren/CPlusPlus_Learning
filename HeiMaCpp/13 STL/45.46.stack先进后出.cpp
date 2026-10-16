// stack 先进后出 电梯 单门公交车 箱子放物品
// 有push pop top empty size

#include <iostream>
#include <stack>
#include <windows.h>
using namespace std;

void test01()
{
    stack<int> s;
    // 入栈
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    // 出栈 只要不为空就出栈
    while (!s.empty())
    {
        cout << s.top() << endl;
        s.pop();
    }
    cout << "栈的大小：" << s.size() << endl;
}

int main()
{
    // utf8编码支持中文
    // 设置显示的编码格式
    system("chcp 65001");
    test01();
}