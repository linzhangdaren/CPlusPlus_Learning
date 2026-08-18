#include <iostream>
using namespace std;

struct User
{
    int i = 90;
    int n = 0;
    string name = "zph";
};

struct Person
{
    User u;
};

int main()
{
    User uu;
    cout << uu.name << endl;
    return 0;
}