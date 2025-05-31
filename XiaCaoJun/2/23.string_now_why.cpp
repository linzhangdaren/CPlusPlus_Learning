//string的原理机制
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s1("hello world");
    string s1("你好啊,我是中国人!你是哪里人?");
    //在给string第二次赋值时候 明显占用空间比s1多
    //底层原理上计算机又申请了一块新的地址
    //const char* s1="你好啊...."

    //中文编码默认GBK 2个字节

    /*
    utf 有很多编码方式
    UTF-8

    英文字符（ASCII）：1个字节
    常用中文字符：3个字节
    极少数特殊汉字或符号：4个字节
    优点：兼容ASCII，节省英文空间，广泛用于互联网
    UTF-16

    英文字符：2个字节
    常用中文字符：2个字节
    极少数特殊字符（如emoji等）：4个字节（采用代理对）
    优点：中英文都较节省空间，适合东亚文字多的场景
    UTF-32

    所有字符（无论中英文）：4个字节
    优点：每个字符定长，处理简单，但空间浪费大
    */
}