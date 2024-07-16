#include <iostream>
#include <string>
using namespace std;

// 创建英雄结构体包括姓名，年龄，性别
// 创建英雄数组，数组中存放5个英雄
// 按照年龄进行升序排序然后打印

struct Hero
{
    string name;
    int age;
    string sex;
};

void bubbleSort(struct Hero heroArray[], int len)
{
    for (int i = 0; i < len - 1; i++)
    {
        for (int j = 0; j < len - 1 - i; j++)
        {
            if (heroArray[j].age > heroArray[j + 1].age)
            {
                struct Hero temp = heroArray[j];
                heroArray[j] = heroArray[j + 1];
                heroArray[j + 1] = temp;
            }
        }
    }
}

void printHero(struct Hero heroArray[], int len)
{
    for (int i = 0; i < len; i++)
    {
        cout << " 姓名：" << heroArray[i].name
             << " 年龄：" << heroArray[i].age
             << " 性别：" << heroArray[i].sex
             << endl;
    }
};

int main()
{
    struct Hero heroArray[5] =
        {
            {"刘备", 23, "男"},
            {"关羽", 22, "男"},
            {"张飞", 21, "男"},
            {"赵云", 20, "男"},
            {"诸葛亮", 19, "男"}};

    int len = sizeof(heroArray) / sizeof(heroArray[0]);
    // 排序前输出测试
    cout << "排序前：" << endl;
    printHero(heroArray, len);

    // 冒泡排序函数
    bubbleSort(heroArray, len);

    // 排序后输出测试
    cout << "排序后：" << endl;
    printHero(heroArray, len);

    system("pause");
    return 0;
}