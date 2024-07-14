#include <iostream>
using namespace std;

class Stu
{
public:
    string name;
    //构造函数
    Stu(){
        string name="jay";
        cout<<"name="<<name<<endl;
    }
};

int main()
{
    class Stu a;
    return 0;
}