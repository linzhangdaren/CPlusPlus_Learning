#include <iostream>
using namespace std;
// 多级指针

int main()
{
    int a = 10;

    int *p; // int *p=&a
    p = &a;

    int **p2; // 可以理解为*p2就是一个指针,int*是指针类型，所以int* /*p2=&p
    p2 = &p;  //*p2就是指向p的地址，**p2就是p指向的值

    int ***p3;
    p3 = &p2;
    //p3->p2->p->a 100

    return 0;
}