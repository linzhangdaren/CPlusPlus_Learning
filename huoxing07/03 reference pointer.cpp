#include <iostream>
using namespace std;
// 引用是变量一个别名,先起正规名,才能起别名从属依赖关系
// 引用声明后必须初始化,不能改变引用的指向

int main()
{

    int *pNum = new int(50);
    int *&rpNum = pNum;
    // 相当于:
    //  pNum=new int(50);
    //  &rpNum = pNum;
    cout << *rpNum << endl;

    return 0;
}