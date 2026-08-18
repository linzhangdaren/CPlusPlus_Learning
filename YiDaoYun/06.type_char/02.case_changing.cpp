// 大小写转换
// 字符差距是32，所以可以用一个数组来表示大小写转换
#include <iostream>
using namespace std;

int main()
{
    char c;
    cout << "请输入小写字符：" << endl;
    cin >> c;
    c = c - 32; // 转换为大写字母
    cout << "转换为大写字母：" << c << endl;
    return 0;
}