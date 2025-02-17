#include <iostream>
using namespace std;

// 栈区的注意事项:
// 1.栈区的空间是由编译器自动释放的
// 2.不要返回栈区的地址, 因为栈区的数据随时可能被覆盖
// 栈区的空间是连续的, 但是空间比较小
// 3. 栈区的数据是先进后出
// 4. 栈区的数据没有初始化, 默认值是不确定的

int *func()
{
    int a = 10; // 自动释放 地址将不再指向有效数据
    return &a;  // 不要返回栈区的地址 只能用一次
}
int main()
{
    int *p = func();
    cout << p << endl; // 10

    return 0;
}