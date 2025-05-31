// string字符的类型转换
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string a = "3.141592653589793";
    auto a1 = 3.141592653589793;
    // 字符转换数字
    auto b = stoi(a);  // 转换为int类型
    auto c = stof(a);  // 转换为float类型
    auto d = stod(a);  // 转换为double类型
    auto e = stold(a); // 转换为long double类型
    auto f = stoll(a); // 转换为long long类型
    //  数字转换字符
    auto g = to_string(a1);

    //______________________________________________

    // 字符串的拼接
    string log;
    string txt = "loging system";
    string user = "zph";
    int threadid = 1024;
    log = user + ":" + txt + ":" + to_string(threadid);
    // log前后添加字符 前加debug后加分号;
    log = "[debug]" + log;
    log += ";";
    cout << log << endl;

    //___________________________________________________

    // 查找替换
    string abc = "abcdefghijklmnopqrstuvwxyz";
    string key = "z";         // 把要找的关键字存起来
    auto pos = abc.find(key); // 查找成功返回索引位置

    // 判断是否找到
    if (pos == string::npos)
    {
        // string::npos就是找不到的意思
        cout << "没找到" << endl;
    }
    else
    {
        cout << "找到了" << endl;
        cout << pos <<":"<< key << endl;
    }

    return 0;
}