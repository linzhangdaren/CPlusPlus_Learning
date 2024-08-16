#include <iostream>
using namespace std;
// malloc函数 动态分配内存其他还有calloc realloc free
// void*malloc(unsigned size)  括号里为字节大小

int main()
{
    // 用数组去存储学生的话每个班级都不一样
    // 如果固定好int scores[10] = {0}; 的话，定义少了不够记录,定义多了浪费空间
    // 所以让[]里的值的为动态空间 用多少写多少

    // //以下思路正确但是语法会报错
    // int num;
    // cin>>num;
    // int scores[num] = {0};

    // 正确思路
    int num;
    cout << "请输入班级人数" << endl;
    cin >> num; // 随便写班里有几个学生
    int *p;
    p = (int *)malloc(sizeof(int) * num);
    if (p != NULL) // 万一内存不够申请没成功怎么办?所以用if判断一下就行了
    {
        // 分配成功
        *(p + 1) = 4;                 // 单独赋值
        for (int i = 0; i < num; i++) // 遍历输出
        {
            cout << *(p + i) << endl;
        }

        // 用完以后释放内存
        free(p); // 也可以自定义释放制指定的内存free(p+1) 保留前面几个但是容易造成系统问题
    }
    else
    {
        // 分配失败
        cout << "内存分配失败" << endl;
    }
    return 0;
}