#include <iostream>
#include <string>
using namespace std;

class Cube
{
private:
    int m_L; // 长
    int m_W; // 宽
    int m_H; // 高

public:
    // 设置/获取 长
    void setL(int l)
    {
        m_L = l;
    }

    int getL()
    {
        return m_L;
    }

    // 设置/获取 宽
    void setW(int w)
    {
        m_W = w;
    }

    int getW()
    {
        return m_W;
    }

    // 设置/获取 高
    void setH(int h)
    {
        m_H = h;
    }

    int getH()
    {
        return m_H;
    }

    // 获取立方体面积
    int calculateS()
    {
        return 2 * (m_L * m_W + m_L * m_H + m_W * m_H);
    }

    // 获取立方体体积
    int calculateV()
    {
        return m_L * m_W * m_H;
    }
};

bool isSame(Cube &c1, Cube &c2)
{
    if (c1.getL() == c2.getL() && c1.getW() == c2.getW() && c1.getH() == c2.getH())
        return true;
}
int main()
{
    // 第一个立方体
    Cube c1;
    c1.setL(10);
    c1.setH(10);
    c1.setW(10);
    // cout << "c1立方体的面积是:" << c1.calculateS() << endl;
    // cout << "c1立方体的体积是:" << c1.calculateV() << endl;
    // 第二个立方体
    Cube c2;
    c2.setL(10);
    c2.setW(10);
    c2.setH(10);
    // 对比两个立方体是否相等
    cout << "c1和c2" << (isSame(c1, c2) ? "相等" : "不相等") << endl;
    system("pause");
    return 0;
}