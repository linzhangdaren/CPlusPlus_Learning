#include <iostream>
using namespace std;


void Test02(int i)
{
    cout << i << endl;
}

int main()
{
    int j = 0;
    cin >> j;
    Test02(j); // 调用Test02函数，并将45作为参数传递给它
    system("pause");
    return 0;
}