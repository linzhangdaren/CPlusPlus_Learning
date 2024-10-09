// system 基础指令
// //提取系统命令语法: 在cmd中写:shutdown /?

#include <iostream>
int main()
{
    ////控制台配置
    system("mode cols=100 lines=30"); // 设置窗口大小为100列30行
    system("color 02");               // 设置颜色为蓝色

    // // 打开一个文件: 不能再编译器里调用就直接打开exe文件
    // system("C:\\WINDOWS\\System32\\control.exe mmsys.cpl sounds");

    // system("pause"); // 等待用户输入暂停
    // system("cls");   // 清屏
    // system("exit");  // 退出程序

    // system("shutdown -r -t 0"); // 重启系统-r 重启 -t 时间
    // system("shutdown -s -t 0"); // 立即关闭系统-s 关闭 -t 时间
    // system("shutdown -h");      // 挂起系统
    // system("shutdown /s");      //
    // system("shutdown -a");      // 取消关闭系统
    system("pause"); // 等待用户输入暂停
    return 0;
}
