#include <iostream>
using namespace std;

class Package
{
public:
    Package(int Money);
    int Add(Package p);

private:
    int Money;
};

Package::Package(int Money)
{
    this->Money = Money;
}

int Package::Add(Package p)
{
    return this->Money + p.Money;
}

// 主函数
int main()
{
    Package p1(50);
    Package p2(30);

    cout << "p1+p2=" << p1.Add(p2) << endl; // 调用Add函数
    return 0;
}
