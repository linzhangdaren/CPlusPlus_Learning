#include <iostream>
#include <string.h>
using namespace std;

int main()
{

    char a = 'a';
    char a2[] = "ab";

    cout << "输出定义的char a" << endl;
    cout << a << endl;
    cout << "输出a的ASCII码" << endl;
    cout << (int)a << endl;
    cout << "输出a的ASCII码 c++的" << endl;
    cout << int(a) << endl;
    cout << "输出char a的ASCII码" << endl;
    cout << (char)97 << endl;
    cout << "无定义直接cout 字母a对应的ASCII码" << endl;
    cout << 'a' << endl;
    cout << "输出a所占用空间的大小" << endl;
    cout << sizeof(a) << endl; 
    cout << "___________________________________" << endl;
    cout << endl;
    cout << "输出定义的char a2" << endl;      
    cout << a2 << endl;                       
    cout << "输出a2所占用空间的大小" << endl; 
    cout << sizeof(a2) << endl;               
    cout << "___________________________________" << endl;

    return 0;
}