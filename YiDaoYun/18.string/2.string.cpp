// string 各种用法非常灵活,
// 可以和char直接相加
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string a;
    // a = "a" + "b";
    // // 里的 "a" 和 "b" 是字符串字面量，它们的类型是 const char*,并不是string类型。

    // 正确的类型:
    // 1.临时变量括起来
    // a = string("a") + string("b");

    // 2.不用符号
    // a = "a"
    //     "b";

    // 3.变量初始化
    // string A = "123";
    // string B = "456";
    // string C = A + B;
    // cout << C << endl; // 123456

    // 4.优先级问题 从左到右
    // a = "a" + string("b");
    // a = "a" + string("b") + "c";

    // 5.用函数a.append("123")拼接字符串 支持截取
    // a.append("123")//输出123因为a没有值
    // 无限拼接:
    // a.append("123").append("456");
    // cout << a << endl;

    // substr()函数可以截取字符串
    {
        string a = "123456";
        string b = a.substr(0, 5); // 支持连续截取a.substr(0, 2).substr(2, 2)...
        cout << b << endl;         //
    }

    // 测长.length()函数 对中文好像不管用
    {
        string a = "123456";
        cout << a.length() << endl; // 6
    }

    return 0;
}