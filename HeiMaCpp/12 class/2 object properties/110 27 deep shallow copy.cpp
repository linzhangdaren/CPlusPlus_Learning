#include <iostream>
using namespace std;
// 深拷贝和浅拷贝
// 为了防止浅拷贝(默认拷贝构造函数)拷贝指针后做析构时候出现二次释放报错的问题

class Person
{
public:
    // 成员变量
    int age;
    int *height;

    // 构造函数
    // 默认构造函数
    Person()
    {
        cout << "默认构造函数" << endl;
    }
    // 有参构造函数
    Person(int age, int height)
    {
        this->age = age;
        this->height = new int(height);
        cout << "有参构造函数" << endl;
    }
    // 拷贝构造函数
    Person(const Person &p)
    {
        this->age = p.age;
        // this->height = p.height; // 浅拷贝的默认是这样写的导致指针指向同一块内存,析构会导致二次释放报错
        this->height = new int(*p.height); // 深拷贝 先把对象已有的身高解引用得到160 然后发放入新的new里并赋值给this->height
        cout << "拷贝构造函数" << endl;
        // 把新开辟的地址空间赋值给参数 避免了浅拷贝出的同一块内存被析构函数释放两次
    }
    // 析构函数  堆区开辟的数据进行释放
    ~Person()
    {
        if (this->height != NULL)
            delete this->height; // 释放指针 二次释放了这里需要用深拷贝重写一下规则
        height = NULL;           // 防止野指针
        cout << "析构函数" << endl;
    }
};

void test01()
{
    Person p1(18, 160);
    cout << "p1的年龄为" << p1.age
         << "身高为" << *p1.height << endl;

    Person p2(p1);
    cout << "p2的年龄为" << p2.age
         << "身高为" << *p2.height << endl;
}

int main()
{
    test01();

    return 0;
}