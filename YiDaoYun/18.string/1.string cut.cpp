// string 截取
#include <iostream>
#include <string>
using namespace std;

int main()
{
    // 截取
    string a("0123456789", 1); // 输出下标为1的字符
    cout << a << endl;

    string b("0123456789", 1, 9); // 输出下标从1到8的字符
    cout << b << endl;

    cout << "请输入字符串:" << endl; // 输入字符串
    string c;
    // cin >> c;          // 输入字符串
    // string d(c, 1, 3); // 截取字符串的前3个字符
    // cout << d << endl;

    // 复制
    string e("hello");
    string f(e);       // 复制e
    cout << f << endl; // 输出"hello"

    string g(10, '=');
    cout << g << endl; // 输出"=========="

    string h(6, 65);
    cout << h << endl; // 输出"AAAAA"

    { // 转换
        // 1.数字转为字符串 to_string()
        int a = 10;
        int b = 20;
        string c = to_string(a) + to_string(b); // 输出"1020"
        cout << c << endl;
        // 2.字符串转为数字 stoi()
        string d = "123";
        string e = "456";
        int f = stoi(d) + stoi(e); // 输出123456
        cout << f << endl;
    }

    return 0;
}