// queue 先进先出 电梯 超市入口只能进出口只能出 先来后到
// 有push pop back front empty size
// 只能访问对头和对尾 没有遍历

#include <iostream>
#include <queue>
#include <windows.h>
using namespace std;

void test01()
{
    queue<int> q;
    // 入栈
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    // 出栈 只要不为空就出栈
    while (!q.empty())
    {
        cout << q.front() << endl; // 栈底
        cout << q.back() << endl;  // 栈顶
        q.pop();
    }
    cout << "栈的大小：" << q.size() << endl;
}

int main()
{
    // utf8编码支持中文
    // 设置显示的编码格式
    system("chcp 65001");
    test01();
}