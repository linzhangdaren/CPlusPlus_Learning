#include <iostream>
using namespace std;

int main()
{
    int i = 1;
    while (true)
    {
        cout << i << "、"<<"你好啊" << endl;
        cout << "现在是第" << i++ << "次循环" << endl; // 每次循环，i的值加1
        if (i > 10)
        {
            break; // 当i大于10时，跳出循环
        }
    }
}