#include <iostream>
using namespace std;
// define 是按照一行一行来处理的 一行算一个语句
#define NUM 1000//意思就是NUM=1000
#define ADD(a, b) a + b//意思就是ADD(a,b)=a+b
#define ADD2(a, b) (a + b)//意思就是ADD2(a,b)=(a+b)
// 预处理 Preprocessing  #define

int main()
{
    cout << NUM << endl;            // 1000
    cout << NUM + 1 << endl;        // 1001
    cout << ADD(1.5, 2) << endl;    // 3.5如果再乘以2结果是1.5+2*2=5.0
    cout << ADD2(1, 2) * 2 << endl; // 6
    return 0;
}