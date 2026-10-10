#include <iostream>
#include <string>
#include <windows.h>
using namespace std;
// string字符插入和删除

/*
string substr(int pos = 0, int n = npos) const; // 截取从pos开始的n个字符的子串
*/

void test01()
{
    string str = "锄禾日当午 汗滴禾下土 谁知盘中餐 粒粒皆辛苦";
    // 截取从pos开始的n个字符的子串
    string subStr = str.substr(0, 5 * 3 + 1); // utf8编码一个汉字占3个字节空格占1个字节 5个字*3个字节+1个空格
    cout << subStr << endl;
}
void test02() // 截取邮箱案例
{
    string email = "zhangsan@sina.com";
    // 获取@的位置
    int pos = email.find("@");
    string userName = email.substr(0, pos);
    cout << userName << endl;
}
int main()
{
    // 采用utf8 防止乱码
    SetConsoleOutputCP(CP_UTF8);
    test01();
    test02();

    return 0;
}