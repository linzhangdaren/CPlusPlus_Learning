// 激活码案例
// 根据用户信息生成一组加密信息CDKEY

#include <iostream>
#include <string>

#define dVersion "1.0.0"
#define dUrl "www.zph.com"

using namespace std;

void list()

{
    // 解决中文乱码问题:
    system("chcp 65001");

    system("title 激活码案例");
    system("color 0A");
    cout << "==================== 激活码案例 ==================== " << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << "\t   欢迎使用激活码生成工具V" << dVersion << "\t" << endl;
    cout << endl;
    cout << endl;
    cout << "\t\t官网:" << dUrl << "\t" << endl;
    cout << "===================================================" << endl;
}

int main()
{
    unsigned long long key;
    short birthYear;
    float weight;
    short height;
    char sex;
    long long mobile;

    list();
    system("pause");
    system("cls");

    system("title 激活码案例");
    system("color 0A");
    cout << "===================================================" << endl;
    cout << "\t   欢迎使用激活码生成工具V" << dVersion << "\t" << endl;
    // 在所有输入后再计算key
    cout << "请输入您的出生年:" << endl;
    cin >> birthYear;
    cout << "请输入您的体重(kg):" << endl;
    cin >> weight;
    cout << "请输入您的身高(cm):" << endl;
    cin >> height;
    cout << "请输入您的性别(1:男/2:女):" << endl;
    cin >> sex;
    cout << "请输入您的手机号码:" << endl;
    cin >> mobile;
    cout << endl;
    cout << "\t\t官网:" << dUrl << "\t" << endl;
    cout << "===================================================" << endl;

    // 现在计算key
    string inputData = to_string(birthYear) + to_string(weight) + to_string(height) + to_string(sex) + to_string(mobile);
    key = hash<string>{}(inputData);

    cout << "您的激活码为:" << key << endl;

    system("pause");
    system("cls");

    return 0;
}