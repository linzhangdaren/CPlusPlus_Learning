#include <iostream>
using namespace std;

int main()
{
    struct student
    {
        string name;
        int age;
    };

    student abc[2];
    abc[0] = {"周杰伦", 20};
    abc[1] = {"林俊杰", 25};

    for (int i = 0; i < 2; i++)
    {
        cout << abc[i].name << endl;
        cout << abc[i].age << endl;
        cout << endl;
    }

    return 0;
}