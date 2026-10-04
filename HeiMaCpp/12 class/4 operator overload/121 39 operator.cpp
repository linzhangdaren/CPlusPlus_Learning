// 就是为了让不同的数据类型之间可以进行运算
#include <iostream>
using namespace std;
// 运算符重载 的底层原理 两个类的对象相加 简化写法而已
// 如 p1+p2  底层是p1.operator+(p2) 只不过就是简化了写法 但内部逻辑函数还得自己写
// 语法糖 编译器的关键字operator+ operator- operator*....等等

// class Person
// {
// public:
//     int a;
//     int b;
// };

// int main()
// {
//     Person p1;
//     p1.a = 1;
//     p1.b = 2;

//     Person p2;
//     p2.a = 3;
//     p2.b = 4;

//     Person p3 = p1 + p2;
//     cout << p3.a << endl;// 4
//     cout << p3.b << endl;// 6

//     return 0;
// }
// 以上代码是无法实现的  两个对象相加是无法运算的
// 想让两个对象运算这时候就需要运算符重载
// 自己写一套函数  让两个对象相加
