#include <iostream>
using namespace std;
// goto 是一个蛇头咬蛇尾的概念
// 如下 a=5 是一个圆圈
int main()
{
    int a;
label_a1:
    cout << "a=" << a << endl; // a=5
    a = 1;
    // label_a1://如果声明两个标签会报错
    a = 2;
    cout << "a=" << a << endl;
    a = 3;
    a = 4;
    a = 5;
    goto label_a1; // 并不是就近原则
    return 0;
}