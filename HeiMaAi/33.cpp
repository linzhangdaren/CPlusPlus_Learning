#include <iostream>
using namespace std;

int main()
{
    // 解决乱码
    system("chcp 65001");

    int num1, num2;

    cout << "请输入两个整数:" << endl;
    cout << endl;

    cout << "请输入第一个整数:" << endl;
    cin >> num1;
    cout << "您输入的第一个整数是:" << num1 << endl;
    cout << endl;

    cout << "请输入第二个整数:" << endl;
    cin >> num2;
    cout << "您输入的第二个整数是:" << num2 << endl;
    cout << endl;

    string value = num1 < num2 ? "会" : "不会";
    cout << num1 << value << "比" << num2 << "小" << endl;

    system("pause");

    return 0;
}