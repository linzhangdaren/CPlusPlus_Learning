// 格式化输出流 formatted output stream 方便控制格式的排版和分格线
// 以什么形式输出 比如std::fixed就是以固定小数形式输出
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // //科学计数法输出
    // cout << "输出科学基础法3E20:" << 3E20 << endl;
    // cout << fixed;
    // cout << "输出cout<<fixed;之后的科学基础法3E20:" << 3E20 << endl;

    // 字符排版的输出

    // cout << left; // cout<<right左右对齐控制一下排版(默认是右对齐)
    cout << setw(20) << "1" << endl;
    cout << setw(20) << "10" << endl;
    cout << setw(20) << "100" << endl;
    cout << setfill('*') << setw(20) << "1000" << endl;
    cout << setfill('=') << setw(20) << "=" << endl;

    // 左对齐:
    // 1
    // 10
    // 100
    // 1000****************
    // ====================

    // 右对齐:
    //                    1
    //                   10
    //                  100
    // ****************1000
    // ====================

    return 0;
}
// 常用格式化输出流：需要包含头文件<iomanip>。

//  1.fixed：则默认输出6位小数,指定精度的小数位数则用setprecision()函数设置。
//  2.scientific：以科学计数法形式输出,如:3.14159e+00。
//  3.defaultfloat ：默认输出浮点数。也就是恢复默认输出的状态。
//  4.setprecision()：设置输出精度。如setprecision(2)则输出2位小数3.14。
//  5.dec:以十进制形式输出。如:314。
//  6.hex:以十六进制形式输出。如:0x2e8。
//  7.oct:以八进制形式输出。如:777。
//  8.showbase:十六进制和八进制显示前缀,如0x或0。
//  9.shownobase:不显示进制前缀。
//  10.setw(int):设置输出宽度。如setw(10)则输出宽度为10。
//  11.setfill(char):设置填充字符。如setfill('*')则输出宽度为10的数字右对齐，填充字符为*。
//  12.left:左对齐。
//  13.right:右对齐。
//  14.internal:居中对齐。
//  15.endl:输出完后换行。
//  16.ends:输出完后不换行。
//  17.flush:刷新缓冲区。
//  18.boolalpha:输出布尔值true/false。
//  19.noboolalpha:不输出布尔值。
//  20.showpoint:显示小数点。
//  21.noshowpoint:不显示小数点。
//  22.showpos:显示正号。
//  23.noshowpos:不显示正号。
//  24.unitbuf:输出缓冲区立即刷新。
//  25.nounitbuf:输出缓冲区不立即刷新。
//  26.uppercase:输出大写字母。
//  27.nouppercase:输出小写字母。
//  28.skipws:跳过空白符。
//  29.noskipws:不跳过空白符。
//  30.unitbuf:输出缓冲区立即刷新。
//  31.nounitbuf:输出缓冲区不立即刷新。
