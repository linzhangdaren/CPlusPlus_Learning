#include <iostream>
#include <stdlib.h>
using namespace std;
// malloc配合memset初始化内存
// int *p;
// p = (int *)malloc(sizeof(int) * num);
// if (p != NULL) // 万一内存不够申请没成功怎么办?所以用if判断一下就行了
// {
//     // 初始化内存
//     // memset(p, 0, sizeof(int) * num);// 0表示初始化为0 c++中用memset报错是因为memset是c语言的函数
//     // 分配成功
//     *(p + 1) = 4;                 // 单独赋值
//     for (int i = 0; i < num; i++) // 遍历输出
//     {
//         cout << *(p + i) << endl;
//     }

// calloc 申请内存并且初始化为0
// int p=NULL;
// p=calloc(10,sizeof(int));//申请10个int类型的内存，并且初始化为0

// int main()
// {
//     // realloc 重新分配内存
//     int num;
//     cout << "请输入班级人数" << endl;
//     cin >> num;                               // 随便写班里有几个学生
//     int *p = (int *)calloc(num, sizeof(int)); // 申请num个int类型的内存，并且初始化为0
//     // p = realloc(p, sizeof(int) * (num + 1));  // 重新分配内存，将原来的内存扩大1个int类型的大小
//     // 用完以后释放内存
//     free(p); // 也可以自定义释放制指定的内存free(p+1) 保留前面几个但是容易造成系统问题
// }
// else
// {
//     // 分配失败
//     cout << "内存分配失败" << endl;
// }
// return 0;
// }