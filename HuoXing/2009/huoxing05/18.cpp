//整型数据类型的字节大小
#include <iostream>
using namespace std;

int main() {
    cout << "Size of char: " << sizeof(char) << " bytes" << endl; // 输出字符型数据类型的大小（以字节为单位）
    cout << "Size of int: " << sizeof(int) << " bytes" << endl; // 输出整型数据类型的大小（以字节为单位）
    cout << "Size of short: " << sizeof(short) << " bytes" << endl; // 输出短整型数据类型的大小（以字节为单位）
    cout << "Size of long: " << sizeof(long) << " bytes" << endl; // 输出长整型数据类型的大小（以字节为单位）
    cout << "Size of long long: " << sizeof(long long) << " bytes" << endl; // 输出长长整型数据类型的大小（以字节为单位）
    return 0; // 返回0，表示程序正常结束

}