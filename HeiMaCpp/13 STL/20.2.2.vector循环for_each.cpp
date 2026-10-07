// vector第三种遍历 for_each 需要头文件<algorithm> 算法
// 需要通过一个函数 回调技术来实现
#include <iostream>
using namespace std;
// 头文件
#include <vector>
#include <algorithm> //算法

// 输出函数
void myPrint(int val) // 回调
{
    cout << val << endl;
}

int main()
{
    // 存放内置数据类型
    vector<int> v;
    // 插入数据
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    // 用算法遍历
    for_each(v.begin(), v.end(), myPrint);

    return 0;
}