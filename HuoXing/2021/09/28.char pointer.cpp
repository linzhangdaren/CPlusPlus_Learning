

// char 数组指针
#include <iostream>
using namespace std;

int main()
{
    int num[]{1, 2, 3};          // num相当于一个指针，指向数组的第一个元素
    char *str = {"hello world"}; // str相当于一个指针，指向字符串的第一个元素
    // 上面等价于char*str[1]{"hello world"};//所以只能装一个字符串
    char *str1[3] = {"123", "456", "789"}; // str1是一个指针数组，每个元素都指向一个字符串的第一个元素

    return 0;
}