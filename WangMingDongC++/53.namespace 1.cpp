#include <iostream>
using namespace std;
// 学校喇叭:张三到办公室来,结果所有的张三都去了办公室

int main()
{
    {
        int a = 100;
        cout << a << endl;
    }

    {
        int a = 200;
        cout << a << endl;
    }
    // 如果不加{}会定义错误因为a重复定义了
    // 给{}前面加个名字就是命名空间了

    return 0;
}