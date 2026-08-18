#include <iostream>
#include <string>
using namespace std;

int main()
{
    // 字符串a1和a2的声明方式:
    char *a1 = "A"; // 包含A和0
    char a2 = 'A';  // 只包含A
    cout << a1 << endl;
    cout << a2 << endl;

    // c语言版本的字符串:
    const char *test1 = "hello";
    char test2[] = "hello";
    char test3[] = {'h', 'e', 'l', 'l', 'o', 0};

    // c++版本的字符串:
    string str1 = "hello";

    cout << test1 << endl;
    cout << test2 << endl;
    cout << test3 << endl;
    cout << str1 << endl;

    return 0;
}
