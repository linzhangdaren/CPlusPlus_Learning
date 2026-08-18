#include <iostream>
using namespace std;

int main()
{ // 二进制的满二位数
    int binary = 0b10;
    cout << "二进制(binary)0b10:" << binary << endl;
    // 八进制的满八位数
    int octal = 010;
    cout << "八进制(octal)010:" << octal << endl;
    // 十进制的满十位数
    int decimal = 10;
    cout << "十进制(decimal)10:" << decimal << endl;
    // 十六进制的满十六位数
    int hex = 0x10;
    cout << "十六进制(hex)0x10:" << hex << endl;

    return 0;
}
