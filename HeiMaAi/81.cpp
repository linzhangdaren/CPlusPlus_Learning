#include <iostream>
using namespace std;

int main()
{
struct student{
    string name;
    string gender;
    int age;
};

student zjl;
zjl.name="周杰伦";
zjl.gender="男";
zjl.age = 18;

student ljj={"林俊杰","男",25};

cout<<zjl.name<<endl;
cout<<zjl.gender<<endl;
cout<<zjl.age<<endl;
cout << endl;

cout<<ljj.name<<endl;
cout<<ljj.gender<<endl;
cout<<ljj.age<<endl;

return 0;
}