// 析构函数 Destructor
// 里面一般写释放指针和检测内存泄漏的代码
#include <iostream>
using namespace std;

class Person
{
public:
    Person()
    {
        cout << "Person的构造函数" << endl;
    }
    ~Person()
    {
        cout << "Person的析构函数" << endl;
    }
};

void test()
{
    Person p;
}

int main()
{
    test();
    system("pause");

    return 0;
}