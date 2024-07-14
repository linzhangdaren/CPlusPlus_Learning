#include <iostream>
using namespace std;

class MyClass
{
public:
    int age;
    string name;
    
};


int main()
{
    MyClass a;
    MyClass *p;
    p=&a;
    p->age=20;
    (*p).name="wangmingdong";//一般不这么写太麻烦
    cout<<p->age<<endl;
    cout<<p->name<<endl;


    return 0;
}