#include <iostream>
using namespace std;
// 结构体

struct Box
{
    int id = 1;
    int id2 = 2; // 课里说这里有值就不能用对象花括号赋值了,但是这里可以
};
int main()
{
    Box box{3, 4}; // 初始化 0
    // Box box = {0};         // 初始化 0
    // Box box = {1};         // 初始化 1
    cout << box.id << endl;  // 0
    cout << box.id2 << endl; // 0

    return 0;
}