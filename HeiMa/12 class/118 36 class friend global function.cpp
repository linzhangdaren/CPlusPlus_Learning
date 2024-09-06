#include <iostream>
#include <string>
using namespace std;
// 友元函数 访问私有函数
//全局函数做友元

class Building
{
    friend void goodGay(Building *building); // 友元函数声明

public:
    Building()
    {
        m_SittingRoom = "客厅";
        m_BedRoom = "卧室";
    }

    string m_SittingRoom; // 客厅

private:
    string m_BedRoom; // 卧室
};

// friend全局函数
void goodGay(Building *building)
{
    cout << "好基友正在访问：" << building->m_SittingRoom << endl;
    cout << "好基友正在访问：" << building->m_BedRoom << endl;
}

void test01()
{
    Building building;
    goodGay(&building);
}

// 主函数
int main()
{
    test01();

    return 0;
}