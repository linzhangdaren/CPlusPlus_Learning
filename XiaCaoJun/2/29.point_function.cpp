// 传递指针或引用将减少复制,提高效率
// 如果不想让指针修改变量 需要主动设置const
// 如果是指针 有没有const 一般认为函数内部都会修改它
#include <iostream>
using namespace std;

void ParaPtr(const int *x, const int *y)
{
    cout << "TestParaPtr: " << *x << "," << *y << endl;
    cout<<"addr:"<<x<<","<<y<<endl;
}

int main()
{
    int x = 1920;
    int y = 1080;
    ParaPtr(&x, &y);
    cout <<&x<<","<<&y<<endl;
    return 0;
}