#include <iostream>
using namespace std;

int main()
{
    switch (1)//括号里1则输出下列1后面的语句
    {
    case 1:cout<<"您选择的是1"<<endl;break;//break才能终止穿透不然会输出234...
    case 2:cout<<"您选择的是2"<<endl;break;
    case 3:cout<<"您选择的是3"<<endl;break;
    default:cout<<"您输入的有误请重新输入！"<<endl;//default后面加不加break都没问题
        
    }

    system("pause");
    return 0;
}
