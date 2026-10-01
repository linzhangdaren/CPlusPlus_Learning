// 在终端直接输入 code 2.hello.c 就可以创建一个名字为hello.c的文件
// 编译：clang 2.hello.c -o 2.hello 或者 make 2.hello(要先安装make)
// 运行：.\2.hello.exe 或者直接运行：./2.hello
// 退出：ctrl+c

#include <stdio.h>

int main(void)
{
    printf("hello world!\n");
    // 输入保持窗口
    getchar();
}
