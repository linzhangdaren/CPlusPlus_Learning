// auto(自动类型推断)关键字可以自动推测变量的数据类型，但是不能保证类型正确
// 推测数据类型 用typeid(变量名).name()获取类型名称

#include <iostream>
using namespace std;

int main()
{
    // 必须初始化,否则无法推测数据类型
    auto a = 10;
    auto b{100l};
    auto c = 3.14f;
    auto d = "hello world";
    auto e = true;
    auto f = 'f';
    auto g{U'A'}; // g 处理 Unicode 字
    auto h{L'B'}; // h 处理宽字符

    cout << "a type: " << typeid(a).name() << char(10); // char(10)对应ascii码的换行
    cout << "b type: " << typeid(b).name() << endl;
    cout << "c type: " << typeid(c).name() << endl;
    cout << "d type: " << typeid(d).name() << endl;
    cout << "e type: " << typeid(e).name() << endl;
    cout << "f type: " << typeid(f).name() << endl;
    cout << "g type: " << typeid(g).name() << endl;

    return 0;
}