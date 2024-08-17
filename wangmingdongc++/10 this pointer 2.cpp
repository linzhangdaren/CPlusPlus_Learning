#include <iostream>
using namespace std;
//再次理解this指针
class Person
{
public:
    int age;

    void coutAge()
    {
        cout << "年龄为：" << age << endl;
        cout << this->age << endl;
        cout << this << endl;
    }
};

int main()
{ // 创建对象方式1:
    class Person jay;
    class Person ljj;
    jay.age = 20;
    ljj.age = 25;

    jay.coutAge();
    cout <<"jay的地址为:"<< &jay << endl;
    cout<<endl;
    ljj.coutAge();
    cout <<"ljj的地址为:"<< &ljj << endl;

    // //创建对象方式2:
    // class Person *ljj=new Person();//无变量名指针直接指向的空间
    // delete ljj;//释放空间
    return 0;
}