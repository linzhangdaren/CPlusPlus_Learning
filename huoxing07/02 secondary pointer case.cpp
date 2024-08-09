#include <iostream>
using namespace std;
// 二级指针通常用于 修改指针指的值和指向空间的内容

int main()
{
    int *pNum = new int(10);

    cout << "pNum: " << pNum << endl;   // 1
    cout << "&pNum: " << &pNum << endl; // 2

    int **ppNum = &pNum;

    cout << "ppNum: " << ppNum << endl;     // 2
    cout << "*ppNum: " << *ppNum << endl;   // 1
    cout << "**ppNum: " << **ppNum << endl; // 10

    return 0;
}