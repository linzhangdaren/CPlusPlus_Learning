#include <iostream>
#include <string>
using namespace std;

// 结构体数组
struct stu
{
    int num;
    string name;
    char sex;
    float score;
};

int main()
{
    struct stu boys[5] =
        {
            {1001, "Tom", 'M', 90.5},
            {1002, "Jerry", 'M', 88.5},
            {1003, "Lucy", 'F', 92.5},
            {1004, "Lily", 'F', 95.5},
            {1005, "Jack", 'M', 87.5}};
    cout << boys[0].name << endl;
    // 整体复制结构体到grils的结构体中:这个有问题有待解决
    // struct stu grils = boys[0];
    // cout << girls[0].name << endl;

    return 0;
}