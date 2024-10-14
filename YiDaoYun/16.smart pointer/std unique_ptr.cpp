// 唯一智能指针unique_ptr
// 共享指针 shared_ptr<int> p(new int(10));
#include <iostream>
#include <memory>
using namespace std;

int main()
{
    unique_ptr<int> p(new int(10)); // 定义智能指针，并用new创建对象
    cout << *p << endl;             // 输出对象的值
    *p = 20;                        // 修改对象的值
    cout << *p << endl;
    // 释放
    p.reset(); // 输出修改后的值
    // 获取指针地址
    int *p2 = p.get();
    // 解绑 本身占用还在
    p.release();
    // 过户 move
    unique_ptr<int> p3(move(p2));

    return 0;
}