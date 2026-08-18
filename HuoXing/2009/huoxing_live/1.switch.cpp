#include <iostream>
using namespace std;

int main() {
    
    float number1, number2, sum, subtract, multiply, divide;

    // 初始化变量
    number1 = 0;
    number2 = 0;
    sum = 0;
    subtract = 0;
    multiply = 0;
    divide = 0;

    int option;
    // 初始化option为0

    // 提示用户选择操作类型
    cout << "请输入您想要的操作：" << endl;
    cout << "1. 加法" << endl;
    cout << "2. 减法" << endl;
    cout << "3. 乘法" << endl;
    cout << "4. 除法" << endl;

    // 获取用户选择的操作类型
    cout << "请选择一个操作（1-4）并按回车：" << endl;
    cin >> option;

    // 根据用户的选择执行相应的运算
    switch (option) {
        case 1:
            cout << "您选择的是：加法" << endl;
            break;
        case 2:
            cout << "您选择的是：减法" << endl;
            break;
        case 3:
            cout << "您选择的是：乘法" << endl;
            break;
        case 4:
            cout << "您选择的是：除法" << endl;
            // 在这里处理除法，需要检查除数是否为0
            break;
        default:
            cout << "您输入的选项有误，请重新输入！" << endl;
            return 1; // 如果输入错误，退出程序
    }

    // 获取第一个数值
    cout << "请输入第一个数值（整数）：" << endl;
    cin >> number1;
    cout << "第一个数值为：" << number1 << endl;

    // 获取第二个数值
    cout << "请输入第二个数值（浮点数）：" << endl;
    cin >> number2;
    cout << "第二个数值为：" << number2 << endl;

    // 根据用户的选择执行相应的运算
    switch (option) {
        case 1:
            sum = number1 + number2;
            cout << "结果为：" << sum << endl;
            break;
        case 2:
            subtract = number1 - number2;
            cout << "结果为：" << subtract << endl;
            break;
        case 3:
            multiply = number1 * number2;
            cout << "结果为：" << multiply << endl;
            break;
        case 4:
            if (number2 != 0) {
                divide = number1 / number2;
                cout << "结果为：" << divide << endl;
            } else {
                cout << "错误：除数不能为0。" << endl;
                return 1; // 如果除数为0，退出程序
            }
            break;
        default:
            cout << "无效的操作类型。" << endl;
            return 1; // 如果选项无效，退出程序
    }

    return 0; // 程序正常结束
}