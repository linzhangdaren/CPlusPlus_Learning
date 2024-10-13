#include <iostream>
using namespace std;

int main()
{
    // 数组的基础知识
    //  要10个空间 int型数组[10]={元素赋值1,2,3如果是0或者空默认初始化为0}
    int student[10] = {0};
    // 使用时 下标从0开始student[0零表示第一个元素的值]
    student[0] = 100;
    cout << "student[0]:" << student[0] << endl;

    return 0;
}