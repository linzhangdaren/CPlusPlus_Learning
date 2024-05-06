//递归函数的累加和
#include <iostream>

using namespace std;

int sum(int n) {
    //如果n等于1，则返回1
    if (n == 1) {
        return 1;
    } else {
        //否则返回n加上sum(n-1)的和
        return n + sum(n - 1);
    }
}

int main() {
    //调用sum函数计算1到100的累加和
    int result = sum(100);
    //输出结果
    cout << "1到100的累加和为: " << result << endl;
    //程序结束
    return 0;
}