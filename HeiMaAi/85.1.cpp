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
    new student[2];
    student *p=new student[2];
    delete[] p;
    

    cout << p[0].name << endl;
    cout << p[1].name << endl;
    return 0;
}