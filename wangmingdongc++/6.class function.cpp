#include <iostream>
using namespace std;
//数据与函数
class Stu //定义一个类名为Stu
{
public://公共权限
    int age=0;
    string name="0";
    
    void a(){//定义一个函数a
        age = 18;
        cout << "age = " << age << endl;
        string name ="jay chou";
        cout << "name = " << name << endl;
    }
};

int main()
{
    Stu boy;//定义一个对象boy
    cout<<boy.age<<endl;//输出boy的age
    boy.age = 20;//修改boy的age
    cout<<boy.age<<endl;//输出boy的age
    cout<<boy.name<<endl;//输出boy的name
    boy.name = "jay";
    cout<<"---------------------"<<endl;
    
    boy.a();//调用函数a

    return 0;
}