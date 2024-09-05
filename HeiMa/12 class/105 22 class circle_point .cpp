#include <iostream>
using namespace std;

// 点和圆关系案例
// 点类
class Point
{
private:
    int m_x; // x坐标
    int m_y; // y坐标
public:
    // 设置/获取x坐标
    void set_x(int x)
    {
        m_x = x;
    }

    int get_x()
    {
        return m_x;
    }
    // 设置/获取y坐标
    void set_y(int y)
    {
        m_y = y;
    }

    int get_y()
    {
        return m_y;
    }
};
// 圆类
class Circle
{
private:
    int m_r;        // 定义半径
    Point m_center; // 定义圆心
public:
    // 设置半径
    void set_r(int r)
    {
        m_r = r;
    }
    // 获取半径
    int get_r()
    {
        return m_r;
    }
    // 设置圆心
    void set_center(Point center)
    {
        m_center = center;
    }
    // 获取圆心
    Point get_center()
    {
        return m_center;
    }
};
// 判断点和圆的关系
void is_in_circle(Circle &c, Point &p)
{
    // 计算两点距离 平方
    int distance =
        (c.get_center().get_x() - p.get_x()) * (c.get_center().get_x() - p.get_x()) +
        (c.get_center().get_y() - p.get_y()) * (c.get_center().get_y() - p.get_y());
    // 计算半径的平方
    int r_distance = c.get_r() * c.get_r();
    // 判断关系
    if (distance == r_distance)
    {
        cout << "点在圆上" << endl;
    }
    else if (distance < r_distance)
    {
        cout << "点在圆内" << endl;
    }
    else
    {
        cout << "点在圆外" << endl;
    }
};
// 主函数
int main()
{

    system("pause");
    return 0;
}
