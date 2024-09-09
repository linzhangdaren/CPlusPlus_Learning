#include <iostream>
using namespace std;
// 继承的基本用法 class inheritance 为了节省代码重复
// 面相对象的三大特性之一:分别有继承,封装,多态
// 从基类继承过来的是共性,新增的成员体现其个性

// 语法: class 子类:继承方式 父类 如 class A : public B
// 子类 派生类
// 父类 基类 超类

class BasePage // 基类 父类 公共页面
{
public:
    // 头部
    void header()
    {
        cout << "首页  下载  关于 (公共头部)" << endl;
    }
    // 尾部
    void footer()
    {
        cout << "帮助中心  用户反馈  友情链接(公共底部)" << endl;
    }
    // 分类列表
    void left()
    {
        cout << "Java Python C++(公共分类列表)" << endl;
    }
};

// 继承 Java页面
class Java : public BasePage
{
public:
    void content()
    {
        cout << "Java基础  Java进阶  Java高级" << endl;
    }
};
// 继承 C++页面
class CPP : public BasePage
{
public:
    void content()
    {
        cout << "C++基础  C++进阶  C++高级" << endl;
    }
};
// 继承 Python页面
class Python : public BasePage
{
public:
    void content()
    {
        cout << "Python基础  Python进阶  Python高级" << endl;
    }
};

void test01()
{
    // Java页面
    cout << "Java页面内容如下:" << endl;
    Java ja;
    ja.header();
    ja.left();
    ja.content();
    ja.footer();
    cout << "----------------------------" << endl;

    // C++页面
    cout << "C++页面内容如下:" << endl;
    CPP cp;
    cp.header();
    cp.left();
    cp.content();
    cp.footer();
    cout << "----------------------------" << endl;

    // Python页面
    cout << "Python页面内容如下:" << endl;
    Python py;
    py.header();
    py.left();
    py.content();
    py.footer();
    cout << "----------------------------" << endl;
}
// 主函数
int main()
{
    test01();

    return 0;
}