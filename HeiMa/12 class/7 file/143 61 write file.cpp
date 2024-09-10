#include <iostream>
#include <fstream> //文件流头文件
using namespace std;
// 文件类型(2个) 和 文件操作类型(3个)

// 文件类型：
//  1.文本文件 (.txt)
//  2.二进制文件 一般用打开里面都是乱码(图片、视频、音频等)

// 文件操作类型：(需包含文件流头文件:fstream)
// 1. ofstream :Output File Stream 输出文件流
// 2. ifstream :Input File Stream 输入文件流
// 3. fstream :File Stream 文件流 (可以同时读写文件)

// 文本文件写入步骤:
//  1.包含头文件 #include <fstream>
//  2.创建流对象 ofstream ofs;
//  3.打开文件 ofs.open("文件路径",打开方式);
//  4.写入数据 ofs << "写入的数据";cout是往屏幕上输出
//  5.关闭文件 ofs.close();

// 文件打开方式:
//  1.ios::in       打开文件用于读取
//  2.ios::out      打开文件用于写入
// 3. ios::ate      初始位置:文件末尾
// 4. ios::app      追加方式写文件
// 5. ios::trunc    如果文件存在先删除，再创建
// 6. ios::binary   二进制方式
// 文件打开方式可以|组合使用
//  例如:ios::in | ios::out 打开文件用于读写

// 文件路径:
//  1.相对路径: 默认是相对于程序运行的路径
//  2.绝对路径: 文件在电脑上的具体位置 如:"D:\c++ test.txt"

// 文件写入 案例
void test01()
{
    // 1. 包含头文件

    // 2. 创建读写流对象 ofs为对象名可以瞎写
    ofstream ofs;

    // 3. 打开方式 (写)
    ofs.open("I Love You.txt", ios::out);
    //"c++ test.txt"为文件名
    // 默认不写盘符为相对路径,如果写盘符则为绝对路径,如"D:\\Desktop\\我爱你.txt"
    ///,ios::out为打开方式

    // 4. 写入数据
    ofs << "I Love You" << endl;
    ofs << "Do you Love me?" << endl;

    // 5. 关闭文件
    ofs.close();
}

// 主函数
int main()
{
    test01();

    return 0;
}