#include <iostream>
using namespace std;

int main()
{
    struct student
    {
        string name;
        int age;
    };
    student a[2] = {{"周杰伦", 20}, {"林俊杰", 25}};
    student *p = a;
    cout << p[0].name << endl;
    cout << p[1].name << endl;
    return 0;
}