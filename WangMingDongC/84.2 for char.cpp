#include <iostream>
using namespace std;

int main()
{

    char name[30] = "zhangpenghua";
    cout << "我的名字叫" << name << endl;
    name[1] = 0; // 将name[1]的值置为0，即将"zhangpenghua"中的"h"置为0，导致字符串不完整，输出结果为"z"

    for (int i = 0; i < sizeof(name)/sizeof(name[0]); i++) {
        cout << name[i] << endl; // 输出name数组中的每个元素
    }
    return 0;
}