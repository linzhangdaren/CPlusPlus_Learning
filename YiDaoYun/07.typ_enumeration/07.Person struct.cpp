#include <iostream>
using namespace std;

// 门派枚举
enum class SCHOOL
{
    wudang,
    emei,
    zph,
    kuihua,
    tangmen
};

// 装备结构体
struct Equip
{
    int level = 1;    // 等级
    int Strength = 1; // 强化等级
};

// 角色信息HP&MP
struct RoleInfo
{
    int value = 1000;
    int maxValue = 1000;
};

// 角色坐标
struct RolePos
{
    int x = 0;
    int y = 0;
};

// 角色结构体
struct Role
{
    int level = 1;                // 等级
    SCHOOL school = SCHOOL::emei; // 门派
    Equip weapon = {1, 1};        // 武器
    Equip armor = {1, 10};        // 盔甲
    Equip neck = {1, 10};         // 项链
    long long exp = 0;
    RoleInfo HP = {1000, 1000}; // 生命值, 最大生命值
    RoleInfo MP = {1000, 1000}; // 魔法值, 最大魔法值
    RoleInfo PH = {1000, 1000}; // 体力值, 最大体力值
    RolePos pos = {0, 0};       // 坐标
    int money = 1000;           // 金币
    int diamond = 100;          // 钻石
    int luck = 1;               // 幸运值

    // 打印角色信息
    void printInfo()
    {
        cout << "角色等级:" << level << endl;
        cout << "门派:" << (int)school << endl;
        cout << "武器等级:" << weapon.level << endl;
        cout << "武器强化等级:" << weapon.Strength << endl;
        cout << "盔甲等级:" << armor.level << endl;
        cout << "盔甲强化等级:" << armor.Strength << endl;
        cout << "项链等级:" << neck.level << endl;
        cout << "项链强化等级:" << neck.Strength << endl;
        cout << "经验:" << exp << endl;
        cout << "生命值:" << HP.value << endl;
        cout << "最大生命值:" << HP.maxValue << endl;
        cout << "魔法值:" << MP.value << endl;
        cout << "最大魔法值:" << MP.maxValue << endl;
        cout << "体力值:" << PH.value << endl;
        cout << "最大体力值:" << PH.maxValue << endl;
        cout << "坐标X,Y:" << "(" << pos.x << "," << pos.y << ")" << endl;
        cout << "金币:" << money << endl;
        cout << "钻石:" << diamond << endl;
        cout << "幸运值:" << luck << endl;
    }
};

int main()
{
    Role user;
    // 输出信息
    user.printInfo();

    return 0;
}