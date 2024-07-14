#include <iostream>
using namespace std;

#define A 1
#define B 2

int main()
{
    // 解决乱码 65001
    system("chcp 65001");
    cout << A + B << endl; // 3

    system("pause");

    return 0;
}