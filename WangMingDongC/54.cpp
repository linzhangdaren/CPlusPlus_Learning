// 函数基本框架写法
#include <iostream>
using namespace std;
void loop()
{
    int n;
    cout << "请输入您想要执行循环的次数:" << endl;
    cin >> n;
    for (int i = 0; i < n; i++)
    {                                                  // 循环n次，执行下面的代码块
        cout << "这是第" << i + 1 << "次循环" << endl; // 输出当前循环次数
    }                                                  // 循环结束后，继续执行下面的代码块
}

int main()
{
    loop();
    return 0;
}
