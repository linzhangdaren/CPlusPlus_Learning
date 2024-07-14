#include <iostream>
using namespace std;

int main()
{
    //解决乱码
    system("chcp 65001");
    int num = 1;
    while (num<=100)
    {
        cout << num << " 这是第" << num << "次循环" << endl;
        num++;
}
system("pause");
    return 0;
}