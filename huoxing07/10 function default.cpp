#include <iostream>
using namespace std;

// 函数的默认值

// 这里的Speed带值所以要放到最后
// 根据逗号运算符 如果Age有默认值了那么逗号后面的必须赋值
// 要想Age不赋值那么就把Speed放到后面
void DoFire(int Age, float Speed = 0.5)
{
    cout << "Age: " << Age << endl;
    cout << "Speed: " << Speed << endl;
};

int main()
{
    DoFire(1);//如果不传18那么会报错,
    DoFire(1, 0.8);//如果不传0.8那么系统会采用0.5这个默认值

    return 0;
}