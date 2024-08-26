#include <iostream>
using namespace std;
// 卸载宏 #undef+宏名
//  宏定义可以在任何地方编写

#define NUM 1000
#define ADD(a, b) a +\ b // 宏定义可以换行用\换行
#define STR(a) #a        // 这个意思是将a转换成字符串 并不是a的值 这就是井号的作用

// 预处理 Preprocessing  #define

int main()
{
    cout << NUM << endl; // 1000
// 卸载宏
#undef NUM

    cout << STR(abcdefg) << endl; // "abcdefg"
    return 0;
}