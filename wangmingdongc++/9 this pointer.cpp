#include <iostream>
using namespace std;
//this指针
class Student
{
public:
    char *name;
    int age;

    void say()
    {
        cout << name << "的年龄是" << age << "岁" << endl;
    }

    void setAgeTemp(int ageTemp)
    {
        age = ageTemp;//this->age=ageTemp 这是补全写法
    }

    void setAge(int age)
    {
        this->age = age;//把age的局部变量赋值给this指针所指向的对象的age成员变量
        //先用外面(谁调用的函数)不带this的再用局部
        //this是一个指针 指向被调用对象的本身
    }
};

int main()
{
    class Student *pStu = new Student();
    pStu->name = "小明";
    pStu->age = 18;
    pStu->say();
    pStu->setAge(20);
    pStu->say();
    pStu->setAgeTemp(23); 
    pStu->say();






    delete pStu;


    return 0;
}