#include <iostream>
using namespace std;

// 指针函数
// 指针可以直接修改实参的值,不是复制
void swap(int *p, int *p1)
{
    int temp = *p;
    *p = *p1;
    *p1 = temp;
}

int main()
{
    int a = 1;
    int b = 2;
    swap(&a, &b);
    cout << "a=" << a << endl;
    cout << "b=" << b << endl;

    system("pause");
    return 0;
}