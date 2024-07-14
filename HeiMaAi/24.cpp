#include <iostream>
using namespace std;

int main()
{
cout<<"10的字节数是"<<sizeof(10)<<"字节"<<endl;
cout<<"10l的字节数是"<<sizeof(10l)<<"字节"<<endl;

cout<<"3.14的字节数是"<<sizeof(3.14)<<"字节"<<endl;
cout<<"3.14f的字节数是"<<sizeof(3.14f)<<"字节"<<endl;
cout<<"3.14d的字节数是"<<sizeof(3.14d)<<"字节"<<endl;//默认就是double所以d没有任何意义报警告但是还能运行的


cout<<"9999999999999的字节数是"<<sizeof(9999999999999)<<"字节"<<endl;


return 0;
}