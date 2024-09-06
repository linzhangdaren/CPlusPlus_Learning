#include <iostream>
#include <string>
using namespace std;

// 类做友元

class Building;

class GoodGay
{
public:
    // 成员变量
    Building *building = nullptr; // 类指针

    // 构造函数
    GoodGay()
    {
        building = new Building;
    }
    // 成员函数
    void visit()
    {
        cout << "好基友正在访问" << building->m_SittingRoom << endl;
    }
    // 析构函数
    ~GoodGay()
    {
        if (building != nullptr)
        {
            delete building;
            building = nullptr;
        }
    }
};

class Building
{
public:
    // 成员变量
    string m_SittingRoom; //"客厅"
    string m_BedRoom;     // 卧室
    // 构造函数
    Building()
    {
        m_SittingRoom = "客厅";
        m_BedRoom = "卧室";
    }

    // private:
    //     // 成员变量
};

void test01()
{
    GoodGay gg;
    gg.visit();
}
// 主函数
int main()
{
    test01();
    return 0;
}
